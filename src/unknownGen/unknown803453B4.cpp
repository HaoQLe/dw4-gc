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
void fn_803250AC();
void *fn_803452CC();
void fn_80345318();
void fn_803455D4();
extern char lbl_804556B0[];
extern char lbl_804E418C[];
extern char lbl_804E4190[];
extern char lbl_804E4194[];
extern char lbl_804E4198[];
extern void *lbl_80536838;
extern void *lbl_80536840;
void fn_803453DC();
void *fn_80345450();
void fn_80345470();
}
extern "C" {
void fn_803453B4(){
 fn_80066188((int)fn_803453DC);
}
void fn_803453DC(){
 fn_803250AC();
 fn_80066204(0,(int)&lbl_80536838,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_80345450,(int)lbl_804556B0,16,(int)fn_80345318,(int)fn_80345470,0,0);
}
void *fn_80345450(){return fn_803452CC();}
void fn_80345470(){
 void *meta=lbl_80536838;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E418C,0x1);
 fn_800659C0(meta,lbl_804E4190,lbl_804E4194,lbl_804E4198,field);
}
void *fn_803454F0(){
 if(!lbl_80536840 || !(reinterpret_cast<unsigned int *>(lbl_80536840)[0x24/4]&4)) fn_803455D4();
 return lbl_80536840;
}
}
#pragma pop
