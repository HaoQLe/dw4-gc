#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_80284550();
void fn_80286F0C();
void fn_802B1AC8();
void *fn_802DA524();
void fn_802DA570();
void fn_802DA80C();
extern char lbl_8042041C[];
extern char lbl_804D21C4[];
extern char lbl_80535398[];
void fn_802DA770();
void *fn_802DA7EC();
}
extern "C" {
void fn_802DA748(){
 fn_80066188((int)fn_802DA770);
}
void fn_802DA770(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535398,(int)fn_80286F0C,(int)fn_80284550,(int)fn_802DA7EC,(int)lbl_8042041C,64,(int)fn_802DA570,(int)fn_802DA80C,0,(int)lbl_804D21C4);
}
void *fn_802DA7EC(){return fn_802DA524();}
}
#pragma pop
