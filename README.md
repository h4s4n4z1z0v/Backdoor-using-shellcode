🚀 Haqqında

Bu, Linux x86 üçün yazılmış minimal C dilində reverse shell nümunəsidir. Kod hədəf maşından hücumçunun IP və portuna TCP bağlantısı qurur və /bin/sh icra edərək uzaqdan tam interaktiv shell imkanı yaradır!

🎯 Xüsusiyyətlər

🔌 Hücumçunun IP və portuna gizli TCP bağlantısı yaradır

🐚 /bin/sh shellini işə salır, interaktiv uzaq shell təmin edir

🧩 Kiçik və səliqəli shellcode C koduna daxil edilib

⚙️ Sadə və pentest laboratoriyaları üçün ideal

⚙️ Necə istifadə etməli
ATTACKER_IP və ATTACKER_PORT dəyişənlərini öz hücumçunun IP və portu ilə əvəz et.

Hücumçunun maşınında aşağıdakı kimi dinləyici aç:

nc -lvp ATTACKER_PORT
Kodu aşağıdakı kimi tərtib et:


gcc -fno-stack-protector -z execstack reverse_shell.c -o reverse_shell
Məqsəd maşında proqramı işə sal və shell bağlantısını gözlə!

⚠️ Diqqət və Etika
⚠️ Bu kodu yalnız icazə verilmiş, nəzarət olunan mühitlərdə istifadə et!
İcazəsiz istifadə qanunsuzdur və etik deyil.
Layihə yalnız öyrənmə, tədqiqat və etik pentesting məqsədilə hazırlanıb.

🔧 Texniki Qeydlər

Platforma: Linux x86

Shellcode uzunluğu: 23 bayt

Stack qoruyucusu deaktiv, icra edilə bilən stack aktivdir

Sadə demo məqsədi, heç bir input yoxlaması yoxdur.

