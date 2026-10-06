#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_802B1AC8();
void *fn_802DBB14();
void fn_802DBB60();
void fn_802DBF40();
extern char lbl_804205A4[];
extern char lbl_804D239C[];
extern char lbl_804D23B8[];
extern char lbl_804D23D4[];
extern char lbl_804D23F0[];
extern void *lbl_80535418;
extern void *lbl_80535438;
extern void *lbl_805621F4;
void fn_802DBCD8();
void *fn_802DBD4C();
void fn_802DBD6C();
}
extern "C" {
void fn_802DBCB0(){
 fn_80066188((int)fn_802DBCD8);
}
void fn_802DBCD8(){
 fn_802B1AC8();
 fn_80066204(0,(int)&lbl_80535418,(int)fn_80066B08,(int)fn_800237D0,(int)fn_802DBD4C,(int)lbl_804205A4,48,(int)fn_802DBB60,(int)fn_802DBD6C,0,0);
}
void *fn_802DBD4C(){return fn_802DBB14();}
void fn_802DBD6C(){
 void *meta=lbl_80535418;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D239C,0x7);
 fn_800659C0(meta,lbl_804D23B8,lbl_804D23D4,lbl_804D23F0,field);
}
void *fn_802DBDEC(void *object){
 fn_802DBF40();
 return fn_8006546C(lbl_80535438,object);
}
void *fn_802DBE2C(){
 if(!lbl_80535438) lbl_80535438=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80535438;
}
void *fn_802DBE80(){
 if(!lbl_80535438 || !(reinterpret_cast<unsigned int *>(lbl_80535438)[0x24/4]&4)) fn_802DBF40();
 return lbl_80535438;
}
}
#pragma pop
