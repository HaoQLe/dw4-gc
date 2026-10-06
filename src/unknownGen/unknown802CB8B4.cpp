#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802CB7CC();
void fn_802CB818();
extern char lbl_8041F29C[];
extern char lbl_804D0FC4[];
extern char lbl_804D0FDC[];
extern char lbl_804D0FF4[];
extern char lbl_804D100C[];
extern void *lbl_80534EF0;
void fn_802CB8DC();
void *fn_802CB950();
void fn_802CB970();
}
extern "C" {
void fn_802CB8B4(){
 fn_80066188((int)fn_802CB8DC);
}
void fn_802CB8DC(){
 fn_802B1AC8();
 fn_80066204(0,(int)&lbl_80534EF0,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_802CB950,(int)lbl_8041F29C,36,(int)fn_802CB818,(int)fn_802CB970,0,0);
}
void *fn_802CB950(){return fn_802CB7CC();}
void fn_802CB970(){
 void *meta=lbl_80534EF0;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D0FC4,0x6);
 fn_800659C0(meta,lbl_804D0FDC,lbl_804D0FF4,lbl_804D100C,field);
}
}
#pragma pop
