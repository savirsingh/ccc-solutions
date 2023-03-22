// code by savir singh
// my current cpp template for ccc
// (and for everything else too lol)

#pragma GCC optimize("Ofast", "unroll-loops")
#pragma optimize( "", off )
#pragma optimize( "", on )
#include <bits/stdc++.h>
using namespace std;
// macros
#define int long long
#define double long double
#define bit32 int32_t
#define del erase
#define pb push_back
#define str string
#define scani(x) scanf("%lld", &x)
#define scan(x) scanf("%s", &x)
#define scanc(x) scanf("%c", &x)
#define printi(x) printf("%lld", x);
#define print(x) printf("%s", x);
#define printc(x) printf("%c", x);
#define pii pair<int, int>

// fast i/o
void read(int &number)
{
    bool negative = false;
    register int c;

    number = 0;
    c = getchar();
    if (c=='-')
    {
        negative = true;

        c = getchar();
    }
    for (; (c>47 && c<58); c=getchar())
        number = number *10 + c - 48;
    if (negative)
        number *= -1;
}

// all vars
// add some variables here...

// driver code
bit32 main() {
  
}

/*
 .----------------.  .----------------.  .----------------.  .----------------.  .----------------. 
| .--------------. || .--------------. || .--------------. || .--------------. || .--------------. |
| |    _______   | || |      __      | || | ____   ____  | || |     _____    | || |  _______     | |
| |   /  ___  |  | || |     /  \     | || ||_  _| |_  _| | || |    |_   _|   | || | |_   __ \    | |
| |  |  (__ \_|  | || |    / /\ \    | || |  \ \   / /   | || |      | |     | || |   | |__) |   | |
| |   '.___`-.   | || |   / ____ \   | || |   \ \ / /    | || |      | |     | || |   |  __ /    | |
| |  |`\____) |  | || | _/ /    \ \_ | || |    \ ' /     | || |     _| |_    | || |  _| |  \ \_  | |
| |  |_______.'  | || ||____|  |____|| || |     \_/      | || |    |_____|   | || | |____| |___| | |
| |              | || |              | || |              | || |              | || |              | |
| '--------------' || '--------------' || '--------------' || '--------------' || '--------------' |
 '----------------'  '----------------'  '----------------'  '----------------'  '----------------' 
 
55555555555555555555555555555555P55PPP55PPPP55P55555555555P5555Y55YYY55Y55555555555555555555555PP5555555P5PP5PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP55PPPPPPPPPPPPPP
YYYYYYYYY5YYY5YYYYYYY5YYY5YYYYYYYYYYYY5YY5555555YYY55555Y555555YYYYYY5YYY5YYYYYYYYYY55555YYYYY55555YY55555555555555555555555555555555555555555555Y555555555YYY55
JYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY5YY55YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY5
JYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY5YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY5YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYJJJYYYY5
YYJJJYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY5YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYJJJJYYYJYYYYYY5
YYJJJJJYJJYYJYJYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYJYYYYYYYYYYYYYYYYYYYJYYYJJYYYYYYYYYYYYYYYYYYYYYYYYYYYYJJJJJJJYJJJJJJJJJJJJJJJYYY5
YYJJJJJJJJYJJJJJJJJYYYYJJJJJJJJYJJJYYYYYYYYYYYYYYYYYYYYYYJJJYYYYYYYYYJJJJJJJJJJJJJJJYYYYYYYYYYYYYYYJYJJJJJJJJYYJYYYYYYJJJYJYYYJYYYJJJJJJJJJJJJJJJJJJJJJJJJJJJJY5
YJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJYYYYJJJYYYYJYYYYYJYYJJJJJYYJYYYJYJJJJJJJJJJJJJJJJJJJJJYYYYYYJYJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ5
YJJJJJJJJJJYJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJYJJYJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ5
JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ????JJY
JJ??JJJJJJJJJ?JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ?JJJJJYYY555PPPP5555YYJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ?JJJJ???JJJJJJJJJJJ????JJY
JJ???JJJJ??????JJJJJJJJJJJJJJJJJJJJJJJ?J?????JJJJJJJJJJJJJJJJJJJJ?JJ5PPGGGBBBBBBBBBBBBBBBGGP5YJJJJJJJJJ?JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ?JJJ????????JJJJJ???????JY
YJ??JJJJJJ????JJJJJJ?????JJ?JJJJJJJ?J???????????J?????J???J????JJ5PGGGGPPPGGGBBBBBB####BBBB###BPYJJJJJJJJJJJJJJJJJJJJJJJJJJJJ???JJJJ?????????????????J????????JY
JJ????JJJJJJ???J??J???????J??????????????????????????????????JY5PGPPPP555PPPGGGGGBBBB##########&&B5J?J???????JJJJJJJJJJ??J?J???????????????????????????????????J
YJ???J??????J???????????????????????????????????????????????YPGGPPPPP5Y55PPPPPGGGGBBBB######&####&&B5J?????????JJJJJJJJJJ???????????????????????????????????????
YJJJJ??????????????????????????????????????????????????????YGGPP5YYJ?????JJJYYY5PGGBBBB#####&&&&##&&&BY???????????????J?????????????7??????????????????????????J
YJJJJ????77??????77???????????????7??7?????????????777????5GP5J?77!!!!!!!!777??JJ5PPGGBB#####&#&&&&&&&&P???????????????????????????7???????????????????????????J
JJ????????????????????????????7??77777??????7?7??77777??JPGGY?77!~~~~~~~~~!!!777?JY55PGBBB##&&&&#&&&&&&&GJ????????????????????????????7?????????????????????7???
JJ?????????????7???77777777?7777?777777777777??7777777?YGBGY?7!~~~~~~~~~~~~~!!777?JY5PPGBBB###&&&&&&&&&&&GJ???????????7??7777777????7777777777???????????7777???
J??77?7777?????7777777777777777777777777777777?777777?YP#BPJ?7!!~~~~~~~~~~~!!!!77?JJY5PPGGB#####&&&&&&&&&&P??????J????????77?7?????777777777777777??????777777??
YJ?77??777??????77777777777777!77777777777777?777777?Y5G#BPJ?7!!!!!!!!!~!!!!!77????JYYY5PPGB###&&&&&&&&&&&&YJYYJJJJ?JJJ??????7??7??77777777777777777????777777??
5YJ????77???JJJJ?7777777777777!77777777777777777777JYPBB#GYJ?7!!!!!!!!!!!!!!!!77?????JJYY5PGB####&&&&&&&&&&BYY5YJYYYYYJJ???J???J???777777777777777777????77777?J
5YYYJJYJJYJJJYYYJ?7?7777??????77777777777777!!!!!7?Y5BBB#GJ?77!!!!!!!!!!!!!!!!77777????JJY5GB###&&&&&&&&&&&&555555555YYJJJJJJ?JJ?7777777777777777777?????7777??J
P5YYJJYY55YJYYYYYJJJJJ?J?JJJJJJ????77!!!!!!7!!!!!7JYPBBB#GJ?777777!!!!!!!77?J????????JJYY5PGB###&&&&&##&&&&&P5PPP55YYYYYYYYJJJYYJ??7777777777!!!77???JJJ??J?JYYY
GGPP5555555YYYYYYYYYYYYYYJYYYJYYYYJJJ?777777!!777?55PBBBBGYJJJJJYYJ?!777?Y5P55YJYY55PPPPPPPGB####&&&&&&&&&#&BPGPPP555YYYYYYYJY5YJJJ?7777777!!!!!!7?7?????JJJJJJY
BBGPPP55555YYYYYYYJYY55YY55555555YJYY5?777!7!!77?J5PGGBGBGPPP5Y5P55Y?77?YPP5YJJ5PPPPGGGG555PGB#####&&&&&&&&&#PPPPPPPP55555YY5PP5YJJ?77777777!77777?????JJJ?7?JJJ
BBGPP555Y55Y55YYYY55Y55YY55555555JJY5Y?777?J??????5GBBBBBGJYYJ?Y55YJ?!!?55YJ?77JYYYYYJJ??JY5GB#####&&&&###&##PPGPPPPPP555P555P5555JJ777777777777??????JJJJ?7?JJJ
BBGP555555YY555YYY55555YY5PP55555YY5PJJ??J55555J?J5GBBB##P?7777?JJ777!!?YYJ?777?????7777?JYPGB#####&&&&&&##&&GGGGGPPPP555PPP5P5555YJ?7777777777???????JJJJ???JJJ
GGGP5555P55555555555555P5PPP55PPPP5PP5P555PY5PPYY5PPB####P?7!!!!!!!77!!?JJ?7!~!~~~~!!77?JY5PB#######&&&&&###&BGGGPPPPP555PPPPPPPPP5YJ?7777777????7???JJJ?JJJJJJY
GP555PP5555P555555PPP55PPPPP5PPPPPPPGPPPPPP5PPP5PPPGBB###GJ77!!!!!!!!~!??J?7!!!!~!!!77?JY5PGB##########&&###&#555555555555555PP55555YYJ????????????JJJJJJJJJYYJY
GP55PGGGPPPPPPPPP5PPP5555PPPPPPPGGPGGPPPGPPPPGGGGGGBBBBB##5?7!!!!!77!!7??JJ?77!!!!777?JY5PGB###########&&&&###GPPPP55YYYYYYYYYYJJJJJJJJJ????JJJJJYYYYJJJJJJJYY55
GP5PPGGGGPPPPPPPPPPPP55555555PPPPPPPPPPPPPPPGGGBBBBBBB####PJ?7!!77?7!!7JJJYJ!!!!!77??JY5PPGB##########&&#&&####BBGGGGGPPPPPPPPPPP555YYYYYYYYY55YY5PP55YY55555P5P
GPPPPGGGGGPPPPGPPPPPPPPPPP5555PPPPPPPPPPPPPPGGGGBBBBB#####B5Y??7777??J5PGPP57!!77??JJY55PGGB##########&###&####BBGBGGGGGGGGPGGGPPPPP555555555P5Y5PPPPPPPPPP55P55
BGPGGBGGGGGPPPPPPP5PPPPPPGPP55PPPPPPPPPPPPPGGGGGBBBBB######GYJJJ?7!!7YPPP5YJ???J??JJYY55PPGB#############&&####BGGGGGGGGGGGGGGGGPPPPPGPGPPPP5555555PPPPPPPP55P5Y
BBBBGGGGGGGPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPGGGGGGGBBBBBBBB###B5JJ?JYJ???JYYYY555YJ???JYY55PGBB###########&&&&&###BGGGGPGGGGGGPGGGPGPGPPPPPPP555555P55PPGPPPPP55555
BGBGGGGGGPPPPPPPPPPPPPPPPPPPPGPPGPPPGGGPPGGGGGGGGGBBBBB#####B5J???77??JJYY5YYJ????JJY5PPPGBB###########&&&&####BGGGGGGPPPPPGPPPPPPPPPPP555555555PPPPPPPPPPPPP555
BGGGGGBBGPPPPPPPPPPPPPPPPPGGGGGGGGGGGGGGPPPPPPPPGGGBBB#######BPYJ?777?JYYYYJJJJJJJYY5PPGGBBB##########&&&&&###BBGPPGGGPPPPPPPPPPPPPPPPPPPPPPPGPPPPPPPPPPPPP55555
BBBBGGGGGGPGPPPPPPPPPPGGPGGGPPGPPPPPPPPPPPPPPPP5GGGGB##########BPY?7!!!!77??JJJYY55PPGGGGBB###########&&&&####BBGPPPGGPPPP55PPPPPGPPPPPPPPGGPPPPPPPP55PPPPPP5P5P
BBBBBGGGBGGGGGGGPPPPPGGGGGGGGPGGGGPPPPPPPPPPPP55PGGBBB#BB#BB#####BPY7!!!7??JJY55PPGGGGGGBB############&#&&#####BBGPPPPPP55555PPPPPPPPPPPPPPPPPPPPPPPPPPPPPP555PG
BBBBBBGGGGGGGBBGPPPPPPPPGGGGGGGGGGPPGGPPPPP555555GGBBBB############BP5YYY555PPGGGGGGBBBBBBB#############&&&######GPPPPPPPPPPPPPPPPPPPPPPPPPGGPPPPPP555PPPPP5PPPP
#BBBBGGGGGGBGBGGGPPPPPPPPGGGGGGPPPPPPPPPP555YYYYYPBBB#B######&&######BBBBGGGGGGGBBBBBBBBBBBBBBB#######&&&&&######BGGPGGGGPPPPPPGGPGGPPGPPGGGGGGPPPP5555555555PPG
BBBBBBGGGGBBGGPGGGPPPPPPPPPPPPPP5P55555YYYYYYY5YY5GGB##################BPPGGGGGBBBBBBBGGGGGGGGBB#####&&#&&#######BGGGPGPPPPPPPPPGPGGGGPGGGGGGGPGGPPPPPPP55555PPG
BBBBBBBBBBBBBGGBBGPPPPPPPPPPP555555555YYYYYYY55Y555PBB##BB############BBYYY555PPGGGGGGPPPPPPPPGB#####&&##&#######GGGPPPPPPPPPPPPPPGPPPPPPPGPPPPPPPPPPPPPP5555Y5P
BBBBGGGGGGGBBBGGGPPPPP555555555555YY555Y5YY5Y555555PBB##BB############BBPJ?JJYY555555PP5555555PGB#####&&&######&&#BGPPP55Y5555555555555555555YYYYY555PP55555YYPP
BBBGPPGGPPPGPPPPPPPPP555PP5PP5PPPP5YY5555555555Y5GPPBBB##B##########BBBBPJ????JJYYYYYYYYYJJJYY5PGBB########B###&&&#BBBGGGGGGGPPP5YY55555YYYYYYYYY555Y5555PP5Y55P
BBGGGPPPPPPPPP55555555555P5PGPGPPPGGPPP5PPGP5PGGPGGG##############BBBGP5YYJ??????JJJJJJ?????JYY5PBBBBB#BBB#GB###&&&####BBBGGBBGPPPGBBGP5YJJJYYYY555YY5P5PPPPP55P
GGGGPPPPPPPPPPP55555P5555PPGPPGP5PGB#GBGGGGBGGBBBBGB##########BBBBGP5YJ?7??7777??????77777????JJ5PGBBBBBGBBGB####&####BBBBBBBBGGBGGGBGPP5JJJYY55555YYY55PPPP555P
PPPGGPPP5P5PPPPPP55555PPPGGPPPGPPPGBBGBBBBBBGGGBBBB#######BBBBBGPYJJ??77!!!7!!777777!!!!!!7777??Y5GGBBBBPGBGB#########BGGGGPPP555YYYYYYJJJJYY5P55PYYY55PPPP5555P
PPGGPGGPP5PPGGPPPP555PPPPGGP55PPPGGBBBGG###BGGBBB########BBBBG5Y??77!!!!!~!!!!!!!!!!!!!!!!!77??JYPGGBBGPPGGGB###########BGGPPP5YJ????JJYYYYY5YYY55555PP55555P55P
GPPPPPPPGGGGGGPPP55PP55P555555P5PGBBBGGGB##BGGBBB########BBBGY?77!!!~~~~~~~~~~!!!~~~~~~!!!!77???YGGGGGGPPBBB##############BGGGGPYJJJJJJYYYYYYY5YY55YYYYYY55P55P5
G5PPPPPPPPPPGGP5555P555P555555GPGGGGGGGGGB#BGGGBB#######BBGG5J7!!!!~~~~~~~~~~~~~~~~~~~~~!!!!77??Y5GPGBBGPBB########BB######BBGGPPYYYYYJJJJJJJJJYYYJJJJY5Y5555P55
G5PPPPPPPPP5PGPP5Y55Y5Y55Y555PPPPPGGGGPGGGGGGGBB######BBGGP5J7!!~~~~~~~~~~~~~~~~~~~~~~~~!!!!77?J5PBGGBBGPBB######BGGGGBBBB##BBBPPPP555YYYYJJ55YYYJYYYY55YY555555
GPPPPPPPGPP5PGGPPYJYYJYYYYY5555PPPPGPPPPGGGGB##&#####BGPP55Y?!!~~~~~~~~~~~~~~~~~~~~~~~~~!!!!7??Y5PGGPGGGPB###BBGGPPPPGGGBB#####BGGP555YYJJJJJJJJJJJ?JJJJ?JJY555P
GPPPPGPGGPPPGGGPGP5P5JJJJJYYYYY55PPPPPPPGBB#&#######BG5YYJY?!!~~~~~~^^~^~~~~~~~~~~~~~~~~!!!!7??Y5PPGGGGGGBGGPPPPP55555PPGGGB######BBGGPPPP5YJJJJYJ???????J?JJYY5
GPPPPPPPPPPGGGGPPPPGGGPP5YYYYY555PPPPPPGB##########BG5JJ??7!!~~~~~~~~~~~^^^^^^~~~^~~~~~~~!!!77?Y5PPGGGGP555YYYYYJYYYYY5PPGGB#######&#BBBGGPGPP55PP5555YYY5JYJJJY
GGGP55PPPP55PPPPPPPGGGPPPP5YY555YY555PB#######B###BG5Y?7!7~~~~~~~~~~~~~~~^^^^^^^^^^~^^~~~!!77?JY5555PP5555YJJJJJY55PGGBBBB######&######BGGGGGGGGGGP55YYYJJJJJJJY
GGGPPPPPPP55PPPPPPPPPPPPPP555PPP5YJY5B############BGPY?!~~~~~~~~~~~~~~~~^^^^^^^^^^^^^^^^~~!!7?JJYY555YYJYYY5PGGBBBB########&#&##&########BGGGGGGGGGGP5YY??7??JYJ
GGGP55PPPPPPPPPP5555PP5555555YYYYYYPB############BGGPPY?7!~~~^^~~~~~~~~^^^^^^^^^^^^^^^^^~~~!7?JJ555555PGGBBBBBBB########&&&&&&&#&#########BGGGGGGGGGGGPP5YYYYYYY
GGBPPPPPPPP55555YYYY55YYYYJYJYYYPGB########BB##BBBGPPPP5YYJ?7!!~!!!~~^^^^^^^^^^^^^^^~~~~~!7?JYY5PPGBBBB#BBBB###&&###&&&&&&&&&&&&###########BGPPGGGGGGGPPPPPPP55Y
GBBGPPPPP5555YYYY5555Y5555555PPB##########BB##BBBGGPPPPP55P555YYYJ?7!!~~^~^~^^^^^^~~~~!7?JY555PPGBBBBBBBB###&&#####B###&&&&&&&&#&##########BBGPGPPPPPPPPPPPPPPP5
GGBGGGPPP5555YY5555P5Y55555PPPB##BB#B####BBB#BGGGPPPPPGPGPPP5PPP5555YYYYJJJ????77777?JYY55PPPPGBBBB#######BB#BGGBBBB#B##&&&&&####&#########BBBGPGPPPPGGGPP55PGGP
BBBBBGGP5555555YY55555YYYYY55G##BBBBBB##B#BBBBGGGPGGPGGBGPPPGGP5555555555555555555555555PGGGGGB##&#######BBBGGGBBBBB###&&&&&&&&&&&&##########BBGBBGGGGGGPP55PPPP
GBBBB##GPPPP555Y5YYYYYYYYYYJ5GBBBBBBBB#BB#B#BGGPGGGGGBBBGPGGGPP55555P55555PPP5PPP5P55PPGGGGB##&&&&&#####BBBGPGBBBBBB###########&&&&##########BBBGGGGGGGGGGPPPGGP
GGBBB###GGGPPPPP5P555PPPPPPPGBBBBBBBBB#BBBB#BGGGBBGGB#BGBBBBGPPP55P5P5PP5PPPPPGGPPPPPPGBBB###&&&&&###BBBBBBGBBBBGBBBGPGGGBBBGBBB###B#########BBBPPGPGPPPPGPPGGGP
GGGGB##BBGGGPPPPPPPPPPPPPPPPGBBB##B#####BB##BGGGBBBB#BBGBBBGGGPPPPPP5PPPGGGGGGPPGGGGBBB######&&&####BBBBBBBB#BBBGGPPPPGGBBGBBBBBB#############BBBPP5P55PGGGGPPPP
BBBBBBBBBPPPGPPPPPPPPPPPPPGGBBBB#BB#########BBBBBGB##BGBBBBBGGGGGGPGPGPGGBGGGPPGGGGBBB#####&&&&#####B####B###GBBGGPPPGGGBBGGBBBB##&############B#BGGPPPPGGGGGPPP
BGGGGBBBP55555YYY55555555PGGBBBBBBB#######B#BBBBBB###BBBB#BBGGBBBBGGGGGGGBGGGGGGGGGBB#####&&########B#######BBBBGGPPGGGPGGGG###&&&&#####BB##BB#B#BBGGBGGGGGGGGGG
GGGGGBBPYYYYYYYYYYYYYJYYY5PGBBBBBBB##B####B##BB#BB#B#BB#B##BBBBBBBBBBBBBGGGGGGPGGB######################&##BGBBGGGPGGPGGBB##&&#&##&#####BBBBBB#BBBBPPPPPPGGGGPGG
GGGGGGPYYYYYYJYYJJJJJJYYYPBBBBB##BBBBBB##BB#BBB#BB#BBBB####BBBBBBBBBBBBGGGGGGGGBBBB####&&################BBGBGGBGPPGGGB##&&&&&&#&&#######BBBBBBBBBBGPPPP55PPGPGP
PPPPP5YY5YYYYYYYYYJJYYYYPBBBBBBBBBBBBBBBBBBBBBB##B##BBBB###BBBBBBBBBBBGGGGGGBBBBBBBB###&###########&###BBBBGGGBBGGGGB#&&&&#&&&&##########BBBBBBBBBBBPP55555555PP
55PPPPPPPPP5555555555PPGBBBBBBBBBBBBBBBB#####BBB####BBBB###BBBBBBBBBBGGBGGGBBBBBBBB######&&##&&####&###B#BBGBBBBB####&&&&##&&&&&#########BBBBBBBBBBBGPPPGGPPPPPP
PPGGGBGGGGGGPPPPPGGPGBBB#BB##BBBBBGGBBBBB####B######B#BB###BB#BB#BBBBBBBGBBBBBBBBB#######&##&&####&#####BBB########&&&&&###&&############B#B#####B#BBBGBBBBBGGGG
PPGGGGGGGGGGPPPGGGGBBBBBBB###BBBBBBBBBBBBBBB##B###############B##BBGBBBBGBBBBBBB########&#&&&&#&&&&&&###B#B####&&&&&&&&&&###&&&&&###############B###BBBBBBBGGGGG
5PGGGGGGGGGGPPPGGBBBBBBBBBBBBBBBBGGGGGGBBBBB##B#&#############B##BBBBBBBBBBBBB##############&&&&&&&#####BB#&&&&&&&#&&&###&#&&&&&###&#######BB##BBB#BBBBBBBGGGGGG
5PGGGGGGGGGGGBBBBBBBBBGBBBBBBBBBGGGGGGBBBB#B####&#########B######BBBBBBBBBBB###############&&&&&&&&#&&####&&&&&&&&&#&####&&&&&&&&&#&&######B####BBBBBBBBBGGGGPGG
PPGGGGGGGGGB#BBBBBBBBBBBBBBBGGGGGGGGGGBBBB#B####################BBBBGGGBBB##################&&&&&&&&&&###&&&&&&&&&&####&#&&&&&&&&&&&&####B#BB####BBBBBBBGGGGGGGG
PGGGGGGBGGBBBBBBBBBBBBBBGGBBBBBBBBBBBBBBBBBB######################BBGBBB######################&&&&#&##&&&&&&&&&&&&#######&##&##&&&&&&####BB#B#####BBBBBBGGGGGPGP
PPPGGGGGB#BBBBBBBB#B###BBB######BBBB###########&#&#############BBBBBBBBB################&##&##&&&&&&##&&&&&&&&&&&&#############&&&&&&#############B#BBBBBGGGGPGP
5PGGGBBB#BBBBBBBB###B###B######BBBBB######BB##################BBBBBB################&&&#&&###&&&&&&##&&&&&&&&&&&&&&&&&&&&#######&&&&&&#############BBBBBBPPPGPGP
5PGGBBB###BBBBBB##BBBBBGGGGGGGGGGGGGGBB####B####&######&#######################&###&&&&&&##&&&&&&&&&&&&&&&&&&&&&&&###&&&&#####&&&&&&&&#################BBGGGGPGP
5PGGBB###BBBBB###BGBGGGGP5PGBBBGGGGPPGBB########&#################################&&&&&####&&&&&&&&&&&&&&&&&&&&&&&####&&&&&&&&&&&&&&&&&###&#######B#####BBBGGGGP
PGGBBB##BBBB#BB##BBGGGGGPGBBG55PGGGGGGBGBBB####&###############################&##&&#&&&&&&&&&&&&&&&&&&&&&&&&&##&&&&&######&&&&#&&#&&&&&##&#############B#BBBGGP
PGGBBB##BBB#B####BGBBGPPPP5YYPBBGP5PPPPP55BBGGP5YYJYYY5PGBB##############&&&&##&&#####&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&#####&&&&&&&&&&&&&##################BBBBGG
PGBBB###BBBBB###BBBBGP5P5P5PBBG55GGPPGP5PG5YY?7!!!!!777??JJY5PGB###&&#&&&&&&&&#&&###&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&######&&&&&&&&&&&&&&################B#BBGBGG
PGB#BB#BB########BBBGPPP5BGBP5YPBBPPGGPBGYYJ77!!!!!!!777?7????JJYY5PGB##&&&&#&##&###&&#&&&&&&&&&&&&&&&&&&&&&&&&&&#########&&&&&&&&&&&&################B##BBBBBGG
PGBBBB###B#B#####BBBGGPPBBGPPGBBGPGGPBGG5Y5?7777!77777777777?????????JYPB#&&&&###&&#####&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&##&&&&&&&&####&####BB##########BBBBBBBGG
PGBBB######B####&#BBBBBBBGPPBBBBGGBPGBGG5PY?????77???777777777????????JJY55PG##&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&###&&&&&&&####&&################BBBBBBBBG
PGB##B##B#BB####&&#######BGBBBBGBBGGGBGGGG5JJJJJJJ??????7777777????????????JJYYPGB##&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&############BB####B##B#BBBG
PGB#############&&######B#BB##BBBBBBBBBGGGG55YYYYYYYJJJ???????77???????????????JY5PGB#&&&&&&&&&&&&&&&##BGGGGBBBB##B##&&&&&&&&#####&##GGBB#####&####&####BB###BBG
GGB############&&&&#####B#######BB#BB###GGBBGPPPPP5YYJJJJJJ?????????????JJJJ?777?J5GPGGGBBGP55PPPGGGBBBGPPPPGGGGGGGGBGB#&&&&&&#&&&#&#GPGB###############B###BBBB
PGGB###&&&&&&&&&&&&&&&#######&###BB#B####BBBBBBBGP55YJJJJJJJJ???JJJJ????JYPP5YJ????J5P55P5P55YY5PPPPPPGGGGGPPPGGBBBBBBBB##&&&&&&&&&&&#GB####&###############BBBG
PGBB###&&###&&&&&&&&&&&&&&&&&&&&##########BGP55YJJJY5YYYYYJJJJJJJJJJJJJ???J5GBGP55YYY5PPPPPPGGGGPGGGGPGGBBGGGPPPGBBBBBBB####&&&&&&&&&&#&&##&################BBBB
B####&######&&&&&###&&#&&&&&&&&&&&&&&&#GP5YYYYJ????JY555YYYYYYYJJJJJY55YJ???JYPGBBGPP555PPPPPPGBGGPGGGGGGBBBBBGGGBBBBBBBBB##&&&&&&&&&&&&###&&&&#####&######BBBBB
B##########&&&&&&&&######&&&&&&&&&&&&B5YY5555YJ????JJY5PP555YYYYYJJJ?J5PP5YJJ?JYPGGGBGGPPPPPGGGGBBGGGGGPPGGBBB##BBBB#BB##BB##&&&&&&&&&&&&&&&&&&#####&######BBBGG
B####&&&###&&###&##&&&&#&#&&&&&&&&&&&P5PPPP5J?JJJ????JJY5PPP555555YJJ??JYPGP5YYYY5PGBBBBBGGG#GBBBBBBB#BGGGPB##BB############&&&&&&&&&&&&&&#&&&&&####&###B##BBGGG
####&&&&&&#################&&&&&&&&&#55PPPYJJYYYJ???JJJYY5PPPP555PPP5YJ??JYPGGP55YY5GBBBBB#BBB##BBBB####BBBB###############&&&&&&&&&&&&&&&&&&&&&#&&&###B###BBGGG
####&&&&&&######&&###########&&##&&#B5PP5YY5555JJJJ?JJYY55PPGGGP55PPGGP5YJY5PGBBGP5555PB#BBBB#########################&&&&&&&&&&@&&&&&&&&&&&&&&&&######BB##BBBGB
###&&&&&&&&&&&&#######&##&&&&####&##BPGP555PP5YYYJJJY55PPPPGGGBBBGGPGGGGGGPPPPGGBBBGP55PB###########&#&####&&#&&##&##&&&&&&&&&&&@&&&&&&&&&&&&#####&&#######BBBGB
##&&##&&&&&&&&&&&&&&&&&&&&&&&&######BBGGP5PP5YYYJJY5PPGGGBBBBBB###BBBBBBBBBBBBGGGBB##BBGB&&&&&&###&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&#####B##B#BBB
##&&&&&&&&###&&&&&&&&&&&&&&&&&&#######BBGPGP55JJY5PGBBBBBBBBBBBBBGBBBBBBGGBBBBB##B######&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&#############B#
##&&&&#&&&#&&#&#&&&&&&&#&&&&#&&&&########BBGPY5PPGB##BBBBBBBB###BBBB#BBBBBBBB##############&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@@&&&&&&&&&&&&&&#&############B#
#####&###&#&#####&&&&&&#&&&##&&&&###########GPPGBB####BBB###########BBBBBB#############&#&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@&&@@&&&&&&&&&##&&&##&#&#####&###B#
####&&&&&&&&###&&&&&&&&&&&&&&&&&&#&&&&&&####GGGG#B###############BBBBB##########&#&&#&#&&&&&&&&&&&&&&&&&&&&@@@@@&&&&&&&&&&&&@&&&@@@@&&&&&&&##&&&#&&&&&&######B##
##&&&&&&&&&&&&&&&&&&&&&&&&&&&#&&&&&&&&&######BBB####################B#########&&&&&&&&&&&&&&&&&&&&&&&&&&&@@@@&&&&&&&&&&&@@@@@@@@@@@@&@&&&&&&##&&&&&&&&&##&&##B##
##&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&##&#######&###&&&&##&#####&####&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@@@@@@@&&&&&@@&&@@@@@@@&@&&@@@@@&&&&&&###&&&&&&&&&#&&##B#&
#&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&#####&###&&&&&&&&&&&&&&&##&&&&&&&&&&&&&&&&&&&&&&&&&&&&@@&&&&&&&&&@@@@@@@@@&&@@@@@@@@@@&@@@@@@@@@@@&@@&&&##&&&&&&&&&&&&&##&&
#&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&##&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@&&@&&&&@@&&&&&&&&@@@@@@@@@&@@@@@@@@@@@&@@@@@@@@@@&&@@&&&&&&&&&&&&&&&&&&##&&
#&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&##&&&&&&&&&&&&&&&&&&@@@@&@@@&@@@@&&&&&&&@@@&@@@@@&@@@@@@@@@@@&@@@@@@@@@@@@@@&&&&&&&&&&&&&&&&&&&##&&
&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&##&&&&&&&&&&&&&&&&&&&&&&&&&&&&&#&&&&&&&&&&&&&&&&&&&&@@@@&@@@@&@@&&&&&&@@@@@@@@@@@@@@@@@@@&@@@@@@@@@@@@@@@@@&&&&&&&&&&&&&&&&&&&#&&
&&&&&&&&&&&&&&&&&&&&&&&&&&&&#&&&&&&#&&&&&&&&&&&&&&&&&&&&&&&&&&#&&&&&&&&&&&&&&&&&&&&@@&&&&&&&&@&&&&&&&@@@@@@@@@@@@@@@@@@@&&&@@@@@@@@@@@@@&@&&&&&&&&&&&&&&&&&&&&&&
#&&&&&&&&&&&&&&&&&&&&&&&&&&&#&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&#&&&&&&&&&&&&&&&&&&&&&&&@&&&&&&&&&&&&&&&&@&&&&&@@@@@@@@@@@&&&&&&@&&@@@@@@@@&@@&&&&&&&&&&&&&&&&&&&&#
B&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&#B&&&&&&&&&&&&&&&&&&&&&&####&##&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@&&&&&&&&&&&@@&&@@&@@@&@@@@@@&&&@&&&&&&&&&&&&&&G
*/

// - savir
/*
       /\     /\
      //\\___//\\
      \_  o o  _/
       /   ^   \
      /  '---'  \
     |__|_|_|__|
     |  | | |  |
     |__|_|_|__|
    /'-./  | \.-'\
   /   /   |   \   \
  (`-/-`)  |  (`-/-`)
   `"`"`"``|``"`"`"`
          \|/
           V
*/
