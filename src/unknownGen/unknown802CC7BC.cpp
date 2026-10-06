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
void *fn_802CC68C();
void fn_802CC6D8();
void fn_802CC9B8();
extern char lbl_8041F334[];
extern char lbl_804D1054[];
extern char lbl_804D1058[];
extern char lbl_804D105C[];
extern char lbl_804D1060[];
extern void *lbl_80534F34;
extern void *lbl_80534F3C;
void fn_802CC7E4();
void *fn_802CC858();
void fn_802CC878();
}
extern "C" {
void fn_802CC7BC(){
 fn_80066188((int)fn_802CC7E4);
}
void fn_802CC7E4(){
 fn_802B1AC8();
 fn_80066204(0,(int)&lbl_80534F34,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_802CC858,(int)lbl_8041F334,16,(int)fn_802CC6D8,(int)fn_802CC878,0,0);
}
void *fn_802CC858(){return fn_802CC68C();}
void fn_802CC878(){
 void *meta=lbl_80534F34;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D1054,0x1);
 fn_800659C0(meta,lbl_804D1058,lbl_804D105C,lbl_804D1060,field);
}
void *fn_802CC8F8(){
 if(!lbl_80534F3C || !(reinterpret_cast<unsigned int *>(lbl_80534F3C)[0x24/4]&4)) fn_802CC9B8();
 return lbl_80534F3C;
}
}
#pragma pop
