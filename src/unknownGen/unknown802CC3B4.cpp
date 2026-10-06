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
void *fn_802CC284();
void fn_802CC2D0();
void fn_802CC5D8();
extern char lbl_8041F308[];
extern char lbl_804D1044[];
extern char lbl_804D1048[];
extern char lbl_804D104C[];
extern char lbl_804D1050[];
extern void *lbl_80534F28;
extern void *lbl_80534F30;
void fn_802CC3DC();
void *fn_802CC450();
void fn_802CC470();
}
extern "C" {
void fn_802CC3B4(){
 fn_80066188((int)fn_802CC3DC);
}
void fn_802CC3DC(){
 fn_802B1AC8();
 fn_80066204(0,(int)&lbl_80534F28,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_802CC450,(int)lbl_8041F308,16,(int)fn_802CC2D0,(int)fn_802CC470,0,0);
}
void *fn_802CC450(){return fn_802CC284();}
void fn_802CC470(){
 void *meta=lbl_80534F28;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D1044,0x1);
 fn_800659C0(meta,lbl_804D1048,lbl_804D104C,lbl_804D1050,field);
}
void *fn_802CC4F0(){
 if(!lbl_80534F30 || !(reinterpret_cast<unsigned int *>(lbl_80534F30)[0x24/4]&4)) fn_802CC5D8();
 return lbl_80534F30;
}
}
#pragma pop
