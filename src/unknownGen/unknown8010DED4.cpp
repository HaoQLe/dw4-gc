#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8010CBD4();
void *fn_8010DE00();
void fn_8010DE3C();
void fn_8010DF94();
void fn_8010E2EC();
extern char lbl_80494860[];
extern void *lbl_805635D0;
extern void *lbl_805635E0;
void fn_8010DEFC();
void *fn_8010DF6C();
void *fn_8010DF8C();
}
extern "C" {
void fn_8010DED4(){
 fn_80066188((int)fn_8010DEFC);
}
void fn_8010DEFC(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_805635D0,(int)fn_8010E2EC,(int)fn_8010DF8C,(int)fn_8010DF6C,(int)lbl_80494860,16,(int)fn_8010DE3C,(int)fn_8010DF94,0,0);
}
void *fn_8010DF6C(){return fn_8010DE00();}
void *fn_8010DF8C(){return lbl_805635E0;}
}
#pragma pop
