Bu layihə sadə C dilində yazılmış reverse shell nümunəsidir. Kod hədəf sistemdən hücumçunun serverinə TCP bağlantısı açaraq, /bin/sh shellini icra edir.
Funksionallıq
TCP socket yaradır.

Hücumçunun IP və portuna qoşulur.

Qoşulduqdan sonra execve("/bin/sh") çağırışı ilə shell (komanda xətti) əldə edir.

Sadə, minimal shellcode nümunəsidir.

İstifadə qaydası
ATTACKER_IP və ATTACKER_PORT dəyişənlərini hücumçunun IP ünvanı və dinləyici portu ilə əvəz edin.

Hücumçunun maşınında nc -lvp ATTACKER_PORT kimi dinləyici açın.

Kodu kompilyasiya edin:

gcc -fno-stack-protector -z execstack reverse_shell.c -o reverse_shell
Hədəf maşında icra edin.

Hücumçunun maşınında shell bağlantısı əldə edin.

Diqqət!
Bu kod yalnız təhlükəsizlik təlimi və etik hacking məqsədilə istifadə edilməlidir.

Qanunsuz istifadə hüquqi məsuliyyətə səbəb ola bilər.

Müvafiq icazəniz olmayan sistemlərdə işlətdikdə qanun pozuntusu hesab olunur.

Texniki Qeydlər
Shellcode Linux x86 platforması üçün yazılıb.

Stack qoruması deaktiv edilməlidir (-fno-stack-protector).

Stack-ə icra icazəsi verilməlidir (-z execstack).

Bu kodda hər hansı bir input yoxlaması yoxdur, yalnız konseptual təlim nümunəsidir.
