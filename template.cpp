// code by savir singh
// my current cpp template for ccc
// (and for everything else too lol)

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
 
 &&&&&&&&&&&#############BGGGGGGBBB#BBBB##BBBBBBBBBBBBBBBBBBBBBBBBB#BBBBBBB###############################BB##BBBBBBGPGB#B#######&##################&#################&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
&&&&&&&&&&###############BGBGGGBBBB######BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB#################B#####BB#BBB##BBBBBGGGGB###################BBB########################&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
&&&&&&&&&&##################BBGGBBBB#BB#BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB######BBBBBB###BBBBGPBB#BBBBBBBBBBBBBBBBBBBBBBBB##BBBBG###############&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
&&&&&&&&&######BBBGBB######BBBGGGGGBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBGBBBBBBBBBBBPBBBBBBBBBBBBBBBBBBBBBBGGGGB##BBGGB#############&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
&&&&&###########BGGGGBBBBBBBGGGPPPPGBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBGGBBBBBBBBGBGPGBBBBBBBBBBBBBBBBBBBGGPP5PG###################&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
&&&&############BGPPPPGBBBBBPPPPGGBBBB#BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBGGGGGGGBBBBBBBBBBBBBBGGGBGBGGGPGGBBGBBBBGBBBBBBBBBBBBBBBBBBBBBBBGGGGP5GB####################&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
########&&&####BBGPPPGBBBBBBBGPGGGBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBGGGGGGGGGGGGBGGBBBBBBBBBGGGGGGGGPPGGGGGGBBBBBBBBBBBBBBBBBGBBBBBBBBBGGGGGPPPB########################&&&&&&#&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
BB#######&#####BBBGGPGBBGGGBBGBBGGBBBBBBBGBBBBBBBBBBBBBBBBBBBBBBGGGGGGGGGGGGGGGGGBBBBBBBBGGGGPPPPPGGGGGGGGGGBGBBBBBBBBBBBBBBBBBBBBBBGGPP555PG###################################&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
#B##############BBPPGGGBBBBBGGBBBGGGGPPPGGBBBBBBBBBBBBBBBBGBGGPGGGGPGGGGGGGGGGGGGGGGGGGGGGGGPGGGGGGGGGGGGBGGGBBBBBBBBBBBBGGGGBBBBBBGGP5Y555PBBB#####################################&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
GGGGB###BBBBBBB##BPGGGGBBBGGPGBBBBBBBGPPPPGBGGBBBBBBBBBBBGGGGGPGGPGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGBBBBBBGGGGGGGGGGGGGGGGGGGP5YYY5GBBBBB#####################################&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
GBGPGGGGGGGGGBB###GPPPPPGPPP5PGGGGGGBBPPGBBBBBBBBBBBBBBGGGGGGGGBGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGPPPPPPPGGGGBBBBBGGGGGGGPPPPPPPPGGGGGG5YYJYPBBBBBBBBBB#################################&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
BBBGGGGGGGBBGGGB##BG5555555Y555PPGGGGGPPGGGBBBBBBBBBBGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGPP5PGGGGGGGGGGGGGGPPPPPPPPPPPPPGP55YYY5GGGGBBBBBBB#######################################&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
&&&##BBGGGGGBBB###B#GGP55Y555P55PPPPPPPPPPPPPGBBGGGGGGGGGGGGGGGGGGGGGGGGGGPPGGGGGGGGGGGGGGGGGGPPGPPPPPPPPPPPPGGGPPPPPPP5555555PPPPPP55YY5PGGGGGBBBBBBBBBB############################################&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
&&&&&&&#BB##########B#BB5YY5YY5PGGGGGGGGGGGBGGGGPGGGGP5PGGBBBBBGGGGGGGGGGPPPGGGGGGGGGGGPPPPPPPPPPP555P555555PPPPPPPPP555555YY55555555YYPPGGPPGGGGBBBBBBBBBB##############################################&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
&&&&&&#############BBBBBPP5YJY5PGGGGGGGGGBBBBGGPPPPP55Y5GGBBBBGGGGGGGGGGGGGPGGGPPPPPPPPPPPPPPPPPPPP555YYYYYYYY5PPPPPP55YJYYYYYYYJJJY5PPPPPPPPGGGGGBBBBBBBBBBBBBBBBB#############################################&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
&&&&&##############BBBBGPGGP5Y55PGGGGGGGGGGGGGGGGPPPPY55PGGGGGGGGGGGGGGGGGPPPPPPPPPPPPPPPPPPPPPP5P5555YYYYYJJY555555YYYJJJYJJYYJYYY5PPPPPGGGGGGGGGBBBBBBBBBBBBBBBBBBBBBB##########################################&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&###&&&&&&&&&&&&
&&&&&#################BGPPPGP5YYPPPGGGGGGGGGP5GGGGGBP5PP555PPGGGGGGGGGGGPPPPPPPPPPPP555PPPPPPP5555555YJYYJ?JYYYY55YYYJJJJYYYY55555PPPPPPPGGGGGGGGGBBBBBBBBBBBBBBBBBBBBBBBB###########################################&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&########&&&&&&&&&&
&&&&&##################BGPPPPP5Y5P5PPGGGPGGP55PGGGGG55555JJJYPPGGGGGGGGGGGPPPPPPPP5555Y55555555Y5YYYYYYYYJ?JYYYYYYJJJJJJYYY555555PGGGPPPPPPPPPGGGGGGBBBBBBBBBBBBBBBBGGBBBBBBBB########################################&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&############&&&&&&&&
&&&&####################BGPPP55YYYYY5PGGPPP5Y5PGGPGP5YY55YJJJ55PPGGPPGGGGGPPPPPPP555555YYYYYYYYYYYYJYYYJJ???JYYYJJJ???JJY55555PPPGGGGGPPPPPPPPPPPPPGGGGBBBBBBBBBBBBBBBBBBBBBBBB########################################&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&#&&&#&&&&&&&&&&&&&&
&&&&#####################BBBGGP5YYYYY55Y5GGGPY5PGGP5YJ5P5YYYYJYYY555PPGGGPPPPPPP55555YYJYYYYYYYYYYYYYYYYJJ?JYYYJ???7??JYYPPPPPPPPPPPPPPPPPP5555555PGGGGBBBBBBBBBBBBBBBBBBBBBBBB########################################&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&###&&&&&&###&&
&&&##########################BBBPYYYY55JYGGGGPYY5PGGPYYJJJJYYJJJYYJY5PPPPPPPPY?JY5YYYJJJJJJJYYJJJJJY5YYYYY??JJJ??7?7J5Y5555555PP55PPPPPPPP55555555PPGGGGGGGBBBBBBBBBBBBBBBBBBBBBBBB####################################&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&###############&&&
&&########################BBBBBBGYYYJY5YY5P55YJY5PGGGP5YYYJYYJ???JJJY5PPPPPPPP5?!?YYJJJJJJJJYJJ???JJJYYYYYJJ????7??JY5555555555555555555555555555PPPGGGGGGGGGGGBBBBBBBBBBBBBBBBBBBBB###################################&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&###&##&&&&&##################&&
&####################BBBBBBBBBBBBGPJJPPPPJJYYYJJY555555JJJJY55J??????JJY5555YYYY?!7JJJJJJJJJJJJ???JJJYYYJJ?????77JYYYYYJYYYYY5Y55555YYYY555555P55PPPGGGGGGGGGGGBBBBBBBBBBBBBBBBBBBBBBB#################################&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&#########&&&&&##################
###################BBBBBBBBBBBBBBBBGYY55P5JJYY555555Y555PP5555J7???77???JJYYYYJJJJ77JJYJJJ?JJJJJ??JJJJJYJ?????777?YYYYYJYJYYY555555YYY55555PP5PPPPPGGGGGGGGGGGGGBBBBBBBBBBBBBBBBBBBBBB#################################&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&########&&&&####&&###########
##################BBBBBBBBBBBBBBBBBBPJJJJ5P555YJ5PPPPP5P55555YJ7?JYY?7!7?Y555YYYJJJ7!JYJJJ??J??????JJJJJJ??????????YYYYYYYYY555555555555555555PPPPPGGGGGGGGGGGGGGBBBBBBBBBBBBBBBBBBBBB######################BB#############&&&&&&&&&&&&&&&&&&&&####&#&&&&#############&&&&&&&&&#########&&##&&&&&###########
################BBBBBBBBBBBBBBBBBBBBBPYJJ555YJJY555P55YYYYYJJJJ7?JJJJJ77JY5YYYJJJ???77JJ???777?JJJ?????JJJJ?????????JYY555555555555555555555555555PPPPPPPPPPPPPGGGGBBBBBBBBBBBBBBBBBBBBBB##############################################################################&&&&&&&###############&#&############
###############BBBBBBBBBBBBBBBGGGGGGGGG5JYYJJJJJJ?JYYYYJ7!!7?JJ????????7?????77!77?77!!7!7?77?JJ????777?JJJJJJ??????YYY55555555555555555555555555YY555PPPPPPPPPPPGGGGBBBBBBBBBBBBBBBBBBBBBBB####BBBB####################################################B###################&###############################
##############BBBBBBBBBBBBBGGGGGGGGGGGGGP55555PP5YYY????!!7??JJJJ?????7!!!7??77!!777!!!!!!77?JJ?????7777?JJJJJJ?????JYYYYYYYYYYYYY555555555555555YYYY55555PPPPPPPPGGGGGGGGBBBBBBBBBBBBBBBBBB##BBBBBBBBBB#BBB########################################BBBBBBBBBBB###################BBBBBB############BBBB####
############BBBBBBBBBBBBBGGGGGGGGGGGGGGPPPPPPPPPPPP5555?!!777?JJJJJJJJJJ7!7777?77777777!!!!~!77??777!!777?JJJJ???77?JJYYYYYYYYYY5YY5555555PPP55555YYY555555555PPPPGGGGGGGGGGGGGBBBBBBBBBBBBBBBBBBBBBBBBBBBBB########################################BBBBBGGGGBBBBBBBBBBBB#####BBBBBBBBBBBB#######B#BBBB####B
###########BBBBBBBBBBBBGGGGGGGGGGGGGPPPPPPPPP555555555YYJ7!!!777???JJ????7!!!!7777?7777!!!!!!77!!!7!!!77!!?????????7?JYYYYYYYYYY555555PPPPPPPP5555555555555555PPPPPGGGGGGGGGGGGGGBBBBBBBBBBBBBBBBBBBBBBBBBBB######################################BBBBBGGGGGGGBBBBBBBBBBBBBBBBBBBBBBBBBBBBB####BBBBBBB####BB
##########BBBBBBBBBBBBGGGGGGGGGGGGPPPPPPPPPP5555555YYYYYYJ!!77!!77???777777!!!!!!!!777!!!!77!!!~~~~!!!!!~~!77??????77?JJJYYYYYYY5555YYJ??JYPP5555555555555555PPPPPPPPGGGPPPPGGGGGGBBBBBBBBBBBBBBBBBBBBB###########################################BBBGGGGGGGGGBBBBBBBBBBBBBBBBBBBBBBBBBB#######B#BBBB##BBBBB
#########BBBBBBBBBBBGGGGGGGGGGGPPPPPPPPPPP5555555YYYYYYYJ!~!!77!!777!!!!!!7!77777!!!!!!!!~!!!~~~~!!!!!!!~~~!77????777??7?JJJJYYYYJ?77!?JY55555555555555555PPPPPPPPPPPPPPPPPPPGPPGGGGBBBBBBBBBBBBBBBBBBBBB####################################BBBBBBBGGGGGGBBBBBBBBBBBBBBBBBBBBBBBBBBBBB################BBBBB
#######BBBBBBBBBBBGGGGGGGGGGGPPPPPPPPPPPP5555555YYYYYYYYY7!~!~!!!!!!!77!!!!!!!!7!!!!!!!!!~~~~!!!~~!!!!!!~~~!77777777???77JJJJJJ7!!!?YYY55555555555555555PPPPPPPPPPPPPPPPPPPPPPPPPGGGGGBBBBBBBBBBBBBBBBBBBBB##############################BBBBBBBBGGGGGGGBBBBBBBBBBB##BBBBBBBBBBBBBBBBBB################BBBBB
#####BBBBBBBBBBBBGGGGGGGGGPPPPPPPPPPPPP5555555555YYYYYYY?7!!~~~!!!!!!!!!!!!!!!!!!!!!!!!!!!~~~~~~~~~~!!!!~~~!!!7!!!7????77?J?7!!!?JJYYYY5Y55555YYY5555555PPPPPPPPPPP5555PPPPPPPPPPGGGGGGGBBBBBBBBBBBBBBBBBBB##BBBB###############BBBBBBBBBBBGBBGGGGGBBBBBBBBBBBBBBBB###BBBBBBBBBBBBBBBB##################BBBB
##BBBBBBBBBBBBBGGGGGGGGGPPPPPPPPPPPPP5555555555YYYYYYYJ!~!7??????7!~~!~~!!!!!!!!!!!!!!~~!!!~~~~~~~~~~~!!~~~!~!!!!!!!!777!!~~7???JJJJJJJJJYYYYY55Y55555555555555555555555PPPPP55PPPGGGGGGGBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB#######BBBBGGGGGGGGBBGGGGGBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB#################BBBBB
BBBBBBBBBBBGGGGGGGGGGGPPPPPPPPPP5555555555555YYYYYYYYY77JJJJJJJJJ?7!!!!~~~!!~~~~!!~~~~~!!!!~~!~!~~~^^~~~~~!~~!!!!7!~~!!~~~!7??????J?????JJJJYYYY555555555555555555555555555YY555PPGGGGGGGGGGBBBBBBBBBBBBBBBBBBBBBGGBBBBBBBBBB#BBBBBGPPPPGGGGGGGGGPPPGGGBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB###############BBBB
BBBBBBBBGGGGGGGGGGGPPPPPPPPPPP55555555555YYYYYYYYYYYYYJJJJJJJJJJJJ?7!!!!!~~~!~~!~~~~~!~~~!!~~~!!~~~^^^~^~~~^!!!!!!!~~~^^~!777??77???7????JJJYY555555555555555555555555YYYYYJJY55PPGGGGGGGGGGGBBBBBBGGGBBBBBBBBBBBBGGBBBBBBBBBBBBBBGP5555PPPP55555Y55555PPPGGGGGGGGBBBBGGBBGGGGGGGGBBBBBBBBBB#############BBB
BBBBBGGGGGGGGGGGPPPPPPPPPP55555555555YYYYYYYYYYYYYYYYYYJJJJJJJJJJ????77!!!!!~!!~~~~~~~~~~~~~~~~!~~~~~~~~~~^^!!!~!~~~~^^~!!!!7777??J??????JJJYYY555555555555555555555YYJJJJJJJY555PPPGGGGGGGGGGBBGGGGGGGGGGBBBBBBBBBGGGGGGBGGGGGBBGGP55YYYYYJ???JJJYYYYYYYY55P55PP5PPPGGGGGGGGGGGGGGGGGGBBBBB##############BB
GGGGGGGGGGGPPPPPPPPPPPP555555555555YYYYYYYYYYYYYYYYYJJJJJJJJJJJJ??????77!7!!!~~!!~~~~~~~~~~^~~~~~~~~~~!!~^:~~~~~~~~~^:^^~~!!!!7???????????JJYYY55555555555P5555P555YJJJJ??JJYY555PPPPPGGGGGGGGGGGGGGGGGGGGGGGGGGGGGPPGGGGGGGPPPPPPP555YJJ??77???JJJJJJJJJJYYYYYYY5Y55555P5PPPPPPPGGGGGGBBBBBBBBBBBBBBBBBBBBB
GGGGGGGPPPPPPPPPPP55P5555555555555YYYYYYYYYYYJJJJJJJJJJJJJJJJJJJJ?????777!!!~~~~~!~~~~~~~^^^^~^^^^~~~~~~^::~~~~~~~~^~~~~~^~!777???????????JJYY5Y555555555PPPPPPP55YJJJJ??JJJJYY55555PPPPPGGGGGGGGGGGGGGGGGGGPP55555PPPPPPGGPP555YYYJ?JJ???????????JJJJJJJJJJYYYYYY555555555PPPPPPPPGGGGGBBBBBBBBBBBBGBBBBBBB
PPPPPPPPPPPP55555555555555555YYYYYYYJJJJJJJYJJJJJJJJJJJJJJJ?JJJJ?????7777!!!!~~^~~~!~~~~~~~^::::^~^~~~~^::^^^^~~~^^~~~^^^^~!!77777?77????JJJYYYYY5555555PPPPP555YYJJ???JJ???JJJJJYYY5555PGGGGGGGGGGGGGGPPPPP55YYY5555555PPP5YYJJJ???777777?????????JJJJJJJJJJYYY5555YYYYY55555PPPPPPPGGGGGGGGGGBBBBBBBBBBBBB
PPPPPPPPPPPP55555555555Y5YYYYYYYYJJJ?JJJJJJJJJJJJJJ?JJJJJ?????????????7777!!!!~~^^^~~~!!!~^:..::^^^^~~^:::^^^^~^^^^~~^^^^~~!!!!!77777????JJJJYYYYYYYY55555555YYYJJJ??????77???7?JJJYYY55PPPPPP5PPPPPPPPP555555YYYYYYYYJJYYYYYJ??77!!!!77777777????JJJJJJJJJJJJJYYYYJJJJJY555PPGGGGGGPPGGGGGGGBBBBBBBBBBBBBBB
PPPPPPPPP5555555555555YYYYYYYYYYJJJJ??????????????JJ???J????????????7777777!!!!!~^^^^^~~!~^:::.:::^^^^::.:^^^^^^^^^^^^^^^^^~~~~~~!77???????JJJJYYJJYYYY5YYYJJJJJJJJ????77777777??JJJJY5555YYYYY5555YYYYJJ?????????7!!777777???77!!!!!!!!!77777?????????JJJJJJJJYJYYYYJJJY55PPPPGGGGGGGGGGBBBBBBBBBBBBBBBBB##
555P5555P55555555555YYYYYYYYYYYYJJJ?????77!7777????JJJJJ???????????77777!!!!~~~~~~^^^^^^~~^:^^::.:::^::..:::^^^^^^^^^^:::^^^~~~!~~~777777????????JJJYYYYYJJJJ????????77777777777777??JJJJJJ?JJJYYJJJJ???????7777!!!!!!!!~!!!!!~!!!~~~!!!!777777?777?????????JYYYY5555YYYY5PPPPPPGPPPPGGGGGBBBBBBBBBBBBBB####
555555YY5YY555555555YYYYYYYYYYYYJJJ????7777!!!!77?????????????77777777777!!~~~~~~~~^::::::.:^^^:....::...::^^^:^^^^^:::^^^^~~~!!!!^:!!777?7???????JJYYYJJJJJJ?????7?77777777???7777???7???????JJ???J??????????777!!!!!!~~~~~~~~~~~~~~~~~!!!!7777777???????JJ55PPPPPP555P5PPPPPPPPPPPPGGGGBBBBBBBBBBBB###BBBB
PPP5555YYYYY555Y5555YYYYYYYYYYYJJJJJ???7777!!!!!!7777?????????7777777777!!!~^^^^^^^:::::::..:.::...... ...:^:::::^^::::^^^^~~~~!!!!^~77??????77777?JYJJ???????J?????????????????777????77??????????JJJJJJJ??J????77777!!!!!!!!~~!~~~~~~~~~!7!!777??JJJJJYY5PPPGGGGGP5555PPPPPPPPPPGGGGBBBBBBBBBBB#######BBBB
PPPP5555YYYYY5YYYJJYYYYYYYYYYYJJJJJJJ??7777!!!!~~!!!!7???77777777777777!!!~~~^^^^^^:::::::::^:.:.. ...   .::::..::^^^^^^^^^^~~!!!!7777???????77777?JJ??????????????????JJJJJ??J??????????????????JJYJJJJJJJJJJJ??????777!!!!!!!!!!!~~~~~~~!77???JJY55555PPPPPPGGGGGPP5PPPPPPPGGGGGGBBBBBBBBBBB##############
GPPPP5555YYYYYY5YYYYYYYYYYYYYYYYJJJJJ?77777777!!~~!!~!!77777777777777!!!~~~~~~^~~^^^:::::::.::......   . .:.....::::::^^^^^~~~!!7777?????????????????7?7????????J???JJJJJJJJJJJJJJJJJJJ??JJJJ??JJJJJJJJJJJJJJJJJJJJ????7777777777!!!!!!!!!!7?YYJJYYYY55PP55PPPPGGGGGPPPPPPPPPGGGGBBBBBBBBBBBBB##############
GGPPPPP555YYYYYY5555YYYYYYYYYYYYYYJJ?777!!!!!!!!!!!!!~!!7777777777777!!!!~~~^^^^^^^^^:^:.::.... ....   . ...  ..:::::^^^~~~~~~!!!777???77??7???????????????????J?JJJJJJJJJJJJJ??JJJJJJJ???JJJJJJJJJJJJJJJJJJJJJJJJJ?????77777777777!!!!!!!!7?JYYY5555YY5555PPPPGGGGGGPPPPPPPPPGGGBBBBBBBBBBBB###############
GGGPPPPP55555555555555YYYYYJYYYYYYYJJ???7!!!!!!~!!!!!!!!77777777777!!!!!~~~^^^~~~~~~^^!~..::...  .    .. ..   ..:::::^^^~~~~~~!!~~777777777777?777777?????????????????J?????????????????????????JJJ??JJJJ??????????????77777777777!!!!!!!!!7?Y5PPPPP5YYY55PPPPGGGGGGGGGGGGGGGGGGGBBBBBBBB###################
GGGGGPPPPPPPPPPPPP5555555YYYYYYYYYYYYJJJ??77!!!!!!~~~!!!7777!!777777!!!!!~~^~^~?~~~~~~7!:..::...      .       .:::.:^^^^^^~~~~!!!~!777777777???777?????????????7777?????????????????77777777777777777777777777777???777777!!!!!!7!!!!77777?JY5PPPP5YYY55PPPPPPGGGGGGGGGGGGGGGGGBBBBBBBBBB##################B
GGGGGGGGPPPPPPPPPPPP5555555555555YYYYYYYJ??777!!!!~^^~!77777!!!!!!!77!!!~^^^?7JY7~~~!77~^..::..:.            ..:^^:^^^^^^^^~~~~!!!7!777777777???????????????77777!!77777!!777!!!77!!!!!!!!!!!!!!!!!~!!!!!!!!!!777777777!!!!!!!!!!!!!!7?7!7?JY5555555555P55PPPPPPGGGGGGGGGGGGGGBBBBBBBBBB#################BBB
GGGGGGGGPPPPPPPPPPPP555555555555Y55YYYYYYJ?7777!!!^^~!!7???77!!!!!!!!7!!~~~~Y5JJ?^~~!!~^::.^::.^^.      ..:...^~!~^^^^^^^^^~~~~!!!!!!!!!!777777777777777777777!!!!!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~!!!!!!!!!!7777777777!!!!!!!!!!!!!!!!!!!77777?JYJJ55YYY55PPPPPGPPPPPPGGGGGGGGGBBBBBBBB##########BBB###BB#
GGGGGGGGPPPPPPPPPP5555555555555YYY5555YYYYYJ?77!!~~7777777!777777!!!!!7!~~~75YJJ7~~!!!^::::^^::^::     ^!!!~^~!!!~~^^^~^^^^^~~~~~!!!!!!!!!!!!!!777777777777!!!~~~~~~^^~~~~~~~~~~~~^^^~~~~~~~~~~~~^^^~~~!!!!!!!!!777777777!!!!!!!!!!!!~~~~!!7777777??????7!7?JYYY55555555PPPPPGGGGGGBBBBBBBB#################
GGGGGPPPPPPPPPPPP55555555YYY5YJJYYYYYYYYYYYY?7777!!!!77?7!7????77777777!!!!5PYJJ?7!~~~:.:..::..:::.   .!!!!!!!!!!!~^^^~!!~^^^^~~~~!!!!!!!!!!!!!!77777!77!!!!!~~~~~~~~~~~~~~~~~~^^^^^^^^^^^^^^^^^^^^^^~~~~~~~~~~~!!!!!!777!!!!!!!!!!!!!!!!!!!!77!77!!!!!!~~!77??JYYYYYYYYY555PPPGGGGGGBBBBBBB################
GGGGPPPPPPPPPP5555555555YYYYYYYJ?JJ??JYYJ??JJ?????777777!!777??7???7777!!!JGPYJJ?!^::^^::...:.........^!!!7777!!!!~^^^~!77^^^^~~~!!!!!!!!!!!!!!!!!!!!!!!!!!~~~~~~~~~~~~~^^^^^^^^^^^^:::::^^^^::^^^^^^~~~~~~~~~~~~~!!!!!!!!!!!!!!!!!!!!!!!!!777777!!!!!!!!!!!77???7??JJJYYY555PPPPPGGGBBBBBBBBB##############
GGGPPPPPPPPP55555555555YYYYYYJJJ????77777777????????777777777777???77777!?GG5YJ?7^: :7??7!^...........!77????777!77~^^!!7?!^~~~~~~!!!!!!!!!!!!!!!!!!!!!!!~~~~~~~~~~~~^^^^^^^^^^^^^^^::^^^^^^^^^^^~~~~~~~~!~~~!!!!!!!!!777!!!!!!7777777777777777777!!!!!!!!!!!!!!~~!~!77JYYY555PPPPGGGGBBBBBBBBBBBB#BBB###B##
PPPPPPPPPP5555555555YYYYYYYYJJ????????7777?7??JJJ?77777????77777???777!!?GBP5YJ?!^^:7JJJ?J?~^........^7??JJJJJ?7777~~~~~7J?~~~~!!!!!!!!!!!!!!!!!!!!!!!!~~~~~~~~~~~~^^^^^^^^^^^^^^^^^^^^^~~~~~~~~~~~!!!!!!!!!!!!!!!!7777777777?YY5Y77777777777777777!!!!!!~~~!77?777777?JJY555PPPGGGGGGGBBBBBBBBBBBB#BBB###BB
PPPPP5555555555YYYYYYYYYYYJJJJJJJJJJJJJ???JJJJJYYJ??????????7777?????777PGP5YJJ?7~^?YYJJJJJJ?~.......~??JJJJYYJ??!7!~~~~!?J!~!!!!!!!!!!!!!!!!!~~~~~~~~~~~~~~~^^^^^^^^^^^^^^^^^^^^^~~~~~~~~~~~~~~!!!!!!!!!!!!!!!!?YY5YJJ?77?7J55555YJJYY?777777777777!!!!!!!!!7JJYYYYYJJYYY55PPPGGGGGGGGBBBBBBBBBBBBBBBBBBBBB
PP555555YYYYYYYYYYYYYYYYJJJJJJJJJYYYYYYJJJJJJJJYYJJJJ???JJJ???????????7YGGP5YJJ??7?YYYYYYJJJJ?:......!?JJYYYYYY??7?7!!~^~7J?!~~~~!!!!!!~~~~~~~~~~~^^^^^^^^^^^^^^^^^^^^^^^^^^^^^~~~~~~~!!!!!!!!!!!!!!!777!!7777775PPPPP55J??JY55555YYYYYYJJ?7777777!!!!!!!!!!77?JJJJYYYYY5555PPPPPGGGGGGGGGGBBBBBBBBBBBBBBBBB
PPPPP55555YYYYYYYJJJJJJJJJJJJJJJJJYYYYYYYJJYJJJJJJJJJJJJJJJJ?????????7?BBGP55YJ7!J555555YYYYJJ!......7JYYYYY55Y7?7JJ!7?~~7JY?!~~~~~~~~~~~~~~^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^~^^~~~~~~~~!!!!!!!!~~!!!!!!!!!!77777?J55PPPPP555YY55555YY55P55555J77?7!!7!!!!!!!!!!7?JJJJJJYJYYYY5555PPPPPGGGGGGGGGGGBBBBBBBBBBBBB
5555555555YYYYYJJJJJJJJ????????????JJJYYY5YYYYYYJJJJ???????????J??7777G#BGP55YJ7J5PPPP55555YYYJ^....:?YY5555555J5JJ5?7??7?JYYJ!~~~~~~~~~~~~~^^^^^^^^^^^^^^^^^~~~^^^^^^^~~~~~~~~~~~~~~!!!!!!!~~~~~!!!!!!!!777???JYYY555PPP5555YYYYYYY5555555YJJJJ??JJJ?77!!!!777?JYYYYYYYYYYYY555PPPPPGGGGGGGBBBBBBBBBBBBBBBB
YYYYYYYYYYYYYJJJJJJJ???????????????????JJYYYYJJJJJJ???????????????77?P##BGP555J?5PPPPPPPP555555?^:..!JY55555555J5YJ55?7JYJY??YY!~~~~~~~~~~~^^^^^^^^^^^^^^~~~~~~~~~~~~~~~~~~~~~!!!!!!!!!!!!!!!!!!77777777777???7JY55555PPPPP5YY555555555555555YYYYYYYYJ????7?????JYYYYYYYYYYYYYY5555PPPPGGGGGGBBBBBBBBBBBBB##
YYYYYYYYJJJJJJJJJJJJJJ????????7777??7777?JJJJJJYYYJJJ???777?JJJJJJJ?5&&#BGGPPYJ5GGGGGGPPPPPPPP555?:!JY555PPPPPPYY5J5P5J5555?!7J?~~~~~~~~~~~~^^^^^^^^^^^^~~~~~~~~~~~~~~~~~!!!!!!!!!!!!!77777777777???????????77?JYY5YY55555555555555555555555555555YYJJ?JJJJJYYJJY5YYYYYYYYYYYYYY555PPPPPGGGGGBBBBBBBBBBBB###
555555YYYYYYYJJJJJJJJJJJ???????????????????JJJJJJJJ???777777?JJ????Y#&&#BGGPP55GGGBBBGGGGGGGGPPPP5?JYY5P5PPPPPP5YYY5PPY5PPYY7!?J7~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~!!!!!!!!!!!!!!!!77777777777777777777!7JYY555YY555555555555555555555555555555YYYYYYYYJYYYJY5YYYYYYYY55555555PPPPPGGGGGBBBBBBBBBBBB####
PP55555555555YYYYYYYYJJJJJJJJJ????????JJ??????????77!!!77777777777J#&&&##BGPPPGBBBBBBBBGGGGGGGGPPPJJYJYPPPPPPPP5YYYPPPPYP55JY77JY7!!!!!~~~~~~~~~~^^^^~~~~~~~~~~~~~~~~~~~!!!!!!!!!!!!!77777777777777777!!!!??JY5555555555555555555555555555555555555555555YYYYYYJYYYYYY55YYYY5555PPPPPPGGGGGBBBBBBBBBBBBB####
PPPPPPPPPP5555555YYYYYYJJJJJJJJJJJJJJ???????7777!!!!!~!!777777777?B&&&&##BPPPGBB##BBBBBBBBBBGGGGGGPY5JYPPPPPPPPP55J5PPPP5PPP55JJ5G5?!!!!~~~^^^^^^^^^^^^^^^^^^^^^^^^^~^~~~~~~~~~~~!!!!!!!7777777777777!!!!!7JY55555555555555555555555PPPP555555555555555555555555555YYYYYYYYY5PPPPPGGGGGGGGBBBBBBBBBB##BBBBBB
GGGGGGPPPPPPP555YYYYJJJJJJJJJJJJJJJJJJJ????777777777777???????7??5&&&&###GGGBB#######BBBBBBBBBGGGGG5YJY5G5PPPPPP55YPPPPG5PGGGPPP5PGG57!~~^^^^^^^::::::::::::::::::::^^^^^^^^^^^~~~~~!!!!!!!777777777777!!!!!7J5555555YY5555555555PPPPPPPPPPPPPP5555555P55555PP5555555P555555PPGGGGGGGGGGBBBBBBBBBBBBBBBBBBBB
BGGGGGGGPPPPPP555555YYYYYYYYYYYYYJJJJJJJJJJJJJJJJJ?????JJJJJJ??PGB&&&&##BGGBB###########BBBBBBGGGGG5J?JGG5PGPP5P555PPPGGPPGGGPPGPP5GB5!~~~^^^^^^~^^^^^^^^^^^^^^^^^^^^^~~~~~~~~~!!!!!!777777777777??77777777!!?YY5YY555555555555PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPGGGGGGGGGGGBBBBBBBBBBBBBBBGGGP
BBBBBGGGGGGPPPPPP555555555555555YYYYYYYYYYYYYYYYYYYJJJJJYYYYJJP&##&&&###BB##############BBBBBGGGBGGP??JPGGGGGG5P55GGGGGGGPPGGG5PP555GBPJ!~~~~^^^~~~~~~~~~^^^^^^~~~~~~~~~~!!!!!!!!7777777????????????????777777?YYYYY555555555555555PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPGGGGGGGGGGGGGGGGGBBBGGGGGPP
BBBBBBBBGGGGGGPPPPPPP55555555555555555YYYYYYYYJJJJJYYYYY555YYP#&##&&&&&###################BBBGGBBBBP??JGGGGPPG5J5PGGGPGGGGPGGGPPGPPGBBG5Y!~~~~^^~~~~~~~~~~~~~~~~~~~~~~~~~!!!!!!!777??????????????????JJ????????JYYYYY55555555555555PPPPPPPPPPPPPPPPPPPPPPPPPPPGPPPPPPPPPGGGGPPGGGGGGGGGGGGGGGGGGGGGGGGGPPPPP
##BBBBBBBBBGGGGGGGPPPPPP55555555555YYYYYYYYYYYJJJJJYYYYY5555PB#&&&&##&&######&&&##########BBBBBBBBBY7JPYPGGPPGYJPGGGGPGGGGPGGGGGBPPPGBBGPJ~~~~~~~~~~~~!!~~~~~~~~~~~~~~~!!!!!!!7777??????????????JJJJJJJJJJJJJJJJJJJJY5555555555PPPP5PPPPPPPPPPPPPPPPPPPGPPPPPGGGGGGGGGGGGGGGGGGGGGGGGGGGGGPPPPPPGGGGGPPPPPPP
###BBBBBBBBBGGGGGGPPPPPPP555555YYYYYYYYYYYJJJJJYYYYYYYJJJJJYGB#&&&&&&&&&&&&&&&&&&#########BBBBBBBBBY7J5JGBGGPGYYGGGGGPPBGBPPBBBBBGGPGGGB5P?!!!!!!!!!~~~~~~^^^^^^~~~~~~~~~~~~~~~!~!!777???????????77??JJJJJJJJJJJJJJYY55555P5PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPGGGGBBGGGGGGGGGGGGGGGGGGGP5555PPPPPPPPPPPPPP
###BBBBBBBBBGGGGGGPPPPPPP55555YYYYYYJJJJJJJJJJJJJJJJJJJJJJYGBB#&&&&&&#&&&&&&&&&&&#&########B5G#BBBBY?YPJPBBGGP5YGBGGGG5GBBG5BBBBBBP5GG5GPPY7!!!!~~~~~^^^^^^^^^^^^^^^^^^^^^^^^^:::::::^~!77777!777!!!!777????JJJJ??JY55555PPPPPPPPPPPPPP55PPPPPPPPPPPPPPPPPPPPPPPPGGGGGGGGGGGGGGGGBBGGGGGPP55555PPPPPPPPPPPPP
####BBBBBBBGGGGGGPPPPPP555555YYYYYYYJJJJJJJJJJJJJJJJJJJ5YYB#B#&&#&&&&&&&&&&&&&&&&&&########BGB###BGYYPGY5BBBPJJJBBBGGBPYGBGPBBBBBBBPPGGGPG5J7!77!!!!!!!!!!!!!!!~~^^^^^::::::.....::::::^~!????JJ????7777?77777?JJJY55555555555555555PPP55555P55PPPPPPPPPPPPGPPPPPGGGGGGGGGGGGGGGGGGPPPPP55555555555PPPPPPPPG
######BBBBBBBGGGGGGGGPPPPPPP555555YYYYYYYYYYYYYYYYYYYJP&#B###&&##&&&&&&&&&&&&&&&&&&&##############G5555P5BBBG?7JBBBBBBGYPBBGGBBBBBBBGPGBGPY5Y?77???7777!!!777!!!~~^^^::.............:::::^^~7???????7!!!777777?JYYYYYYYYY5555YYYYYYY55555555PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP55555555555PPPPPPGGGGGBBBB
###########BBBBBBBBBBBGGGGGGGGPPPPP5555555555555555YYP&&&###&&&&&&&&&&&&&&&&&&&&&&&&&############BBBG5YPGPPBG?7?GBBBBBBGBBBBGBBBBBBBBPPBGB5YPPYJ?????????77!!!!~~^^^:..........:^^~!7!!!7!!!!77777777!!!!77!7?J???JJJJJJJYYYJJ??????JJJJYYYYYY555555555555555555555555YYJ???JYYY55Y555PPPPPPPPGGGGGBBBBBBBBB
&&#########BBBBBBBBBBBBBBBBBGGGGGGPPPPPPPPPPPPPP55PPB#&&&###&&&&&&&&&&&&&&&&&&&&&&&&#############BBBBGGBBBGPGY??5GBBBBBBBBBBPGBBBBBBBBPPGGPYPBBBYJJJJJYYJJ7!~^^^::::..::^~!7?????7777777???77???7777?7!!!!777777?????777????????JJJJJJJJJJJJJJJJJYYYYY555YYYY5555YYYYJ?7!~!!7777??JYYJJYY555PPPPPPPPPPPPPPPP
#########BBBBBBBBBBBBBBBBBBBBBBBGGGGGGGGPPPPPPPPPP#&&&&&#####&#&&&&&&&&&&&&&&&&&&&&&##GB###########BBB#BPGBGGBPJ5BBBBBBBBBBBB5GBBBBB#BBPP55JYBBGG5YYYYYYJJJ?77JYYJJJ?77?JJJ???7!!!!!!!!!~!!777777!!!!!~~!!!!777?JJ??????JJJYYYYYYYYYYYYYYYYJJJJJJYYYYYYYYYYYYYYYYYYJJJJJJJYYJJJYYYYYYYJJJJYYYYYYYYYY55555555
############BBBBBBBBBBBBBBBBBBBBBBGGGGGGPPPPPPPPPB&&&&&########&##&&&&&&&&&&&&&&&&&#&#GB##############BBBBB55GGG5GBBBBBBBBBBBBGPG#######5YYYJYBBGBP???777?JJJJJYYY55YYJ???7777??77777!~~^^^~~!~~~~~^^^^^^~~!7?JJJJJJJJJJJYYYYYYYYYY555YYYYYYYJJJ??JJJJJYYYYYYYYYYYYYYYYYYYYYYYYYJJJJJJJYYYYYYY5YYJYYY555555P
BBBBBBBBB#####BBBBBBBBBBBBBBBBBBBBGGGGGGPPPPPPPPG#&&&&###########&&&&&&&&&&&#&&###&##&&BG#&###########BGGYGBBBBBBGBBBBBBBBBBBBBBGG#####BGYY5JJ5PG#&P?77!~:....^~~!77!7!!!!7!!!!!~~~^^^^:::::::::::::^^~~!!!7??JJ?????JJYYYYYYYYYJYYYYYYYYYYYYYYJJJ??JJJ???77!~~~~~~~~~~~~~~~~~~~~~~~~~!7??JJJJJYYYY55555PP5P
##BBBBGGGGGGGGGBBBBBBBBBGGGGGGGGGGGGGPPPPPPPPPPP#&###########&###&&&&&&&&&&####&#######GG##############GY5B########GBBBB#B#BBBB##55####BGB5G5?J5P#&#5JJJJ?7!!!!77777!^^^~!777!~~^^::..........:::^^^^^^^~~!!~!7??7777777!!!!!!!~~!!!!~!!!777777!~~~~~~~!!!!!!~~~~~~~!!!~~~~~~~~!!!7???JYYYYYY555555555555555
BBBBBBGGGGGPPPPPPGGGGGGPPPP55555YYYYYYYJYYJJJJYB##########B#&&&##&&&&&&&&&###&&&&####BGG#####GYB&#######GG#########GPBBB#########GYP#####GJ5PYYYY5B&&5J?777777!!!!!!~~~~!!!!!!!!~~~^^::.... .....::::^^^~!7!^^^^^~~~~!77!~~~~~~~!777777!!!7777777???JYYYYYYYYYYYYYYYYJJJJJJYJJJYYJYYYYYYYYYYYYYYYY55555555PP
PPPPPPP555555555555555555555YYYYYY55YYYYYYYYJYB&#########B#&&&&&&&&&&&&&&&###&&&&&&&#G#G####BGYP#########B##########GG#BG########GYJ5B###BGB#BP5YYP###G?~~~~~~~~~~~~~~~~~!!!!!!!!~~~~~~~~^^:::::::^^~~!777!~~!~~!!!777JJJ7!7??JJJYYYYY5YYY5555555555555555555555555555555YYYYJJJJJJJJ??JJJJJJJJYYYYYYYYYY555
YYYYYYYYYYYYJJJJJJJJYYYYYJJJYYJJJJ????JJJJJJ5#&###########&&&&&&#&#&&&&&&&&&#&#&&&#####B####BBGP#####################PG#PG######BGY?55BB###&&#PBBP5GBB#BY!!!!!!!!!!!!777???777777!!!!~~~~~~!!!!!!!!7!!7?77777??7777?J55YYY55PP55555555555YJJJJJ???JJJJYJJJJJ????JJ?JJJJJYYJYYY55555555YY55555555555555555555
5555Y5YYYYYYYYYJJJJJYJJJJJJJJ??????????????P#&#&#########&&&&&&&######&&#&&&&&&&&&####&####&##BBB####BBBBB###########BYG#########BGYPPGPG##G##B#BBP5GP#&#PJ?????J??????JJJJJ????7777777777??JJ?7777?????777777?JJ?JJY5555P55555YYYYYYYJJJJJJJJJJJJJJYY55555YYY5555555555555555555555555555Y5555555555555555P
GGGGGGPPPPPPPPP5555555555YYJJJJJJYYYYJJJYPB&##&#&&####B##########&&#####&&&&##&&&&&&&&&&&&&&##G#B######GBBGBB#########BYPGGBBB#B##BGPPGG5GGPB#&###B#BBB#&&BP5J??JJJJYYYYYYYYYYYYYYYYYYYYJJYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYJJJJJJJJJJJJJJJJJYYJJJYYJJYJJJJJJJYYYYYJJJJJJJJJYYJJJJYY55555555PPPPPP5PPPPPPPPPP
GGGPPPPPPPP55555555555555555YYYYYYJ?7?J5B#&#####&#################&&&##&&&&&&&&&&##&&&&&&&&&#&B##GP#######BBGGBBB####B#5?PPGBBGGBB##B55GG#B#####&&&&#&#BB###B55PGGPYYJYYYYYYYYYYYYYYYYYYYYYYYYJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYJJJJJJYYYY55555555555555555555PPPPPPP
GGGGPPPPPPP5555YYYYYYYYYYYJJJ55????JPB#&&&&############BBB######&&&&&&&&&&&&&&&&&&&##&&#####B####BBBGB#######BBBBGGGBBBG5GBYGGGBGG##BPJPGBBBB###&&&########GBGGBB##B5J???7???????????????????????????????????????????JJJJJJYYJJJJJJJJJJJJJJJJJJJJJJJJJJYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY555555555555555P555PPP
BGGGGPPP555YYJJJJJ??JYYYYYYYGBB5GBB&&&#&&&#############B######&&##&###&&&##&&&####&#####&####BB###BB#GBB##B####BGPPPGGBGB#BBGGGBGPGBBBGPGPGPGB##BB######&###BBBGGGGBGBPJJ?777777777777777777777777777???JJJJJJJYYYJYY55PPPPPP5555YYYYYYYYJJJJJJJJJJJJJJJJJYYYJJJJJJYYYYYYYYYYYYYY555PPPPPPGGGGGGGGGGGGGGGGGB
BBBBGBGGGGGGGGGGGGGGGPGBBB############&&&&#&&&&###############################################GBB#GG##BBGGGBBB###BB#BPGBBBBBBGG5PG5GBGGGBPP5PPGBBGGBBB#######BBGGGBGGGBBGPYJJJYYYY5555555P5555555PPPPPPPP555555555555555555555PPPPPPPPPPPPPPPPPPPPPPP5PP5555555555Y55555555PPPPPGGGGGGGGGGGGBGGGBBBBBBBBBBGG
BBBBBPGBBGGGGBBGGGGGGGB###&########&&&&&&##&&&&##############BB############################BB#BGBGGPB##BBBBBGPPGB###BGBBGGGGBBBPGPPPBBBBGYJJ?Y55PPGGPP5PGBBBBBGBP5PPGGGGGGBGGP555YJY55YJPBBPY55YYYYYYYYYJJJJJJYYYYYYYYYYYY5Y555555555555555555555PPPPPPPPPPPPPPGGGGGGGPGGGGBBBBBBBGBBBGGBBBBBBBBBBBBBBBBBBGP
#####5PGGPB555P5YYBBB#######################################################################BBBBB##GGPBBB#B5GBPGGGBBB####PPPBBBG5PB#BGGGPPYY55P5555PP55Y5Y5PPGPP555Y5PGGPGYPGBGGGP5PGGPPBBBBGP555PPPP5555Y5YYYP5Y5555555555555555555555555555P5555555555PPPPPPPPPPPPPP5PPPGGGGGGGGGGBBBBBBBBBBBBBBBBBBGGGGGG
#BBBPBGGGPBP5GGBGB###########################################################################BBBB##BG5PGBBBP5#GPBGGBBBB##PY5BBGGBGBBBPYP55555PP5YYYYJY5JYY5PP5Y555P555P5PPY55P55GGBGPGBGBBBBBBBBBBGBBBGGGGPPPGGGPP55PPGGGGPPPPPPPPPP55PPPPPPPPPPPPPPP55555PPPPPPP5PP55PP5PPPPPPPPPPPPPPPGGGGGGGGGGGGGGGGBBGB
##BBG###BGGGG###########################################################################B#####BBG#####BBPPPPPGGPGGGBBG5PBBB##BGG####GPJPPYYY5PYJJ?YY?Y5?JY555YY5P5P555PP55YY555Y55PPPGGPGGGGGGGBGBBBGGBBBBBBBBBBBGBBBBBBBBBGPPPPPPPPP5PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPGPPPPPPGPGGGGGPPGGGGGGGGGGGGGGGGBBBGBBBB
B##BG#B######B####B####BBBBBBBB#######################################################BBG#BBBBBBPG#BB#BBBGPGPPPY5PGGGGBB###BGBGGGBBBBGP5PPPPPPY5PPPP5YPP555PP555GG55PG55PPY5PP555YYY5555PPPPPGPGGGGBGGGBGGGGBBBBBBBBBBBB#B#BBBBBGPPPPBBBGGGGPPPPPPPPPPPPPPPPPPGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGBBBGBB
###B5B#BB#BB##BB#########BBBBBB#B###############################################BB#BBBBBBBBBBBBBBGGGBBBBPGBGGPYYY5PPPGBBGGBGGGGGGGGGGGGGGPY5GGGGGBGGGPPPPPPP5P55PB5PPG5PPY5GPP55YJJ55555Y555PPPYPPGGGGGGGGGGGGBGBBBBBBBBBBBBB####BBGGB#BBB###BGPGGGGPGGPGPGGGGGPGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGBGGGBBBBBBBB
####B5GGP##PG#BGGB##############################################B#####BBBBBBGGGGGBBBBGBBBBBBBBBBB#BBBBBBBBBBBGPPGPPPGPGGBGGGPPGGBBGGGPGPP555PGGGGGGGGGBBBBGBPGBPGGPP55PJJ5GG5YJYJ??JJ??JJJYJJY5PPPGGGGGGGBBG5GPP5GPGGGBBBBBBBBBB#BBBBBBBBBBBBBBBGBGGGGGGGGGGGGGGGGGGGGGGBBGGGGGGGGGGBBGGGBBBBBBBBBBBBBBBBBBB
###&#5YJP##5PPBBG5YB############################################B####BBB##BBBBBGGPGBBGGBBBBBB#BBBB########BBBBGGGGGBBBGGBGPGPPPGGGBGGGP5Y55PPGGGGGGGGGGGGGBBBBGBBBBGGGGPGPGP5G5?JYY5Y??YJ5YYY5PPPPGGGGGBGBBBGGGP55YYY5555PPGGGGBBBBBBGGBBBBBBBBGBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBGGBBBBBBBBBBB##BBBBBBBBB#####
######P?5BBPPYB#B5YG##B#BGGGGB#BB###############################################BBGBBBBBBBBGGGBGBBGBB####B####BBBBBB##BBBBBBGGGGBBGGGGGPPPPGGGGGGGGGGGGGGGBBBBBBBB##BBGG5PPPP55YP55P5YJ55555PPPPPPPGGGGGBGGGBBBBBGGP5555Y5PP555PPGPGBGGGBBBB#BBBBBBBBBBBBBBBB#BBBBBBBBBBBBBBBBBGBBBBB###########BBBBBBB#####
#####&#BGGGBBP5PG5Y5GGBBBGBG5PBGG#########################################################BB####B##BB####B##BBBB##BBBB###BBBBGBBBBBBGBBGGGGGGGGBGGBBBBBBBBBBBBB#######BBGBGGBBBPGGGGGGGPPGPPGBGGGPPGBBBBBBBBBBBBBBBBBGGGGGGGPPPPPPPPPPPPGGBBBBBBBBBBGBBBBBBBBBBBBBBBBBBBBBBBBBGGGBBBBBB##########BB##B######
#&#####&&GP##BP555PPPGBGGBBBPGPBGGGBBBBB#BGG##################BBBBBB##########BB##############B######B#####BBBGBBB#BB#####BBGBGBBBB#BBBBBGGBBBBBBBBBBBBBBBBBB##########################BBB#BBBBBBBB#######BGGBBBBBBBBBGBBGBBBBBBBBBBBBBBBGGBBBBBGGGGGBBBBBBBBBBBBBBB######BBGGGGGGBBBB#########BBBB#########
##&&###&&#######BB#####GGBBBGPGGGGPGBBBB#G5GBBBBBB#######BBBB#####BBBBBBBBBBBBBBBBBBBB########BBBGGGGGGGGBBBGGGGBBBB######BBGGGGBBBBBBBBBBBBBBBBBBB#B##BBB###########################B########BBBBBBBB##BB#BBBBBBGGGBBBBBBBBBBBBBBBBBBBBBBBBBBBBBGGGGBBB###BB#####BB##BBBBBBBBGGGBBBBBBBBBBBBBBBBBBBBB######
##BBB#&#&##&&&#########&&&##BG##BBBBBB####B#############BB#BB########G#BB####BBBBBBBBB#####BBBBGGGBGPPPPPPPPPPPPPPGGBBBBGGGGGGBBBBPPGBBBBBBBBBBGBB##BB###B####################################BBBBB##BBBBBBB#BBBBGGGBBBBBBBBBBGGGB#BBBBBB#BBBBBBBBGGGGBBBBBB####BBBBBGGGGPPGGGGGGGGGGGGGGGGGGGGGGGGGBBBB####
#&##&###&#B#&&&&###&&&&##BB#BBBBB###BB#&###############BGB###B#B######&GPB#&#&&#B####BB##BBBBBBBBBBGGGGGPPP555YYY555PGGGGPPPGGGBBBGGGGBBB#BBBBB###############################B###B##############BB#####BBB####BB##B#BGBBBBBBBGGGBB#B##BBBBBBGGGGGGGPPPGGGGGBBGGGGGGGPPPPP5PPPGGGGGGGGGGGGGGGGGGBGGGBBBBB###
 */

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
