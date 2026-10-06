#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B381C();
void fn_802E3908();
void fn_803250AC();
void *fn_80334900();
void fn_8033494C();
void fn_80334D34();
extern char lbl_80453E5C[];
extern char lbl_804E213C[];
extern char lbl_804E2140[];
extern char lbl_804E2144[];
extern char lbl_804E2148[];
extern void *lbl_80535FD4;
extern void *lbl_80535FDC;
void fn_80334A84();
void *fn_80334AF8();
void fn_80334B18();
}
extern "C" {
void fn_80334A5C(){
 fn_80066188((int)fn_80334A84);
}
void fn_80334A84(){
 fn_803250AC();
 fn_80066204(0,(int)&lbl_80535FD4,(int)fn_802E3908,(int)fn_802B381C,(int)fn_80334AF8,(int)lbl_80453E5C,40,(int)fn_8033494C,(int)fn_80334B18,0,0);
}
void *fn_80334AF8(){return fn_80334900();}
void fn_80334B18(){
 void *meta=lbl_80535FD4;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E213C,0x1);
 fn_800659C0(meta,lbl_804E2140,lbl_804E2144,lbl_804E2148,field);
}
void *fn_80334B98(){
 if(!lbl_80535FDC || !(reinterpret_cast<unsigned int *>(lbl_80535FDC)[0x24/4]&4)) fn_80334D34();
 return lbl_80535FDC;
}
}
#pragma pop
