#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_801AA6DC();
void *fn_801B2F5C();
void fn_801B2F98();
void fn_801B3758();
void fn_801BF938();
extern char lbl_804ACE04[];
extern char lbl_804ACE48[];
extern void *lbl_80564968;
void fn_801B36C0();
void *fn_801B3738();
}
extern "C" {
void fn_801B3698(){
 fn_80066188((int)fn_801B36C0);
}
void fn_801B36C0(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564968,(int)fn_801BF938,(int)fn_8011148C,(int)fn_801B3738,(int)lbl_804ACE48,232,(int)fn_801B2F98,(int)fn_801B3758,0,(int)lbl_804ACE04);
}
void *fn_801B3738(){return fn_801B2F5C();}
}
#pragma pop
