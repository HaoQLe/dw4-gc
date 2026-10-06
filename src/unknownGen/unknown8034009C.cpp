#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_803250AC();
void *fn_8033FD10();
void *fn_8033FFFC();
void fn_80340048();
void fn_803403E8();
extern char lbl_80454E58[];
extern char lbl_80454E68[];
extern char lbl_804E3904[];
extern char lbl_804E3918[];
extern char lbl_804E392C[];
extern char lbl_804E3940[];
extern char lbl_80536600[];
extern void *lbl_80536604;
extern void *lbl_8053661C;
extern void *lbl_805621F4;
void fn_803400C4();
void *fn_80340130();
void *fn_80340150();
void fn_8034019C();
void fn_803401C4();
void *fn_80340234();
void fn_80340254();
}
extern "C" {
void fn_8034009C(){
 fn_80066188((int)fn_803400C4);
}
void fn_803400C4(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536600,(int)fn_803401C4,(int)fn_8033FD10,(int)fn_80340130,(int)lbl_80454E58,24,(int)fn_80340048,0,0,0);
}
void *fn_80340130(){return fn_8033FFFC();}
void *fn_80340150(){
 if(!lbl_80536604 || !(reinterpret_cast<unsigned int *>(lbl_80536604)[0x24/4]&4)) fn_8034019C();
 return lbl_80536604;
}
void fn_8034019C(){
 fn_80066188((int)fn_803401C4);
}
void fn_803401C4(){
 fn_803250AC();
 fn_80066204(1,(int)&lbl_80536604,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80340234,(int)lbl_80454E68,24,0,(int)fn_80340254,0,0);
}
void *fn_80340234(){return fn_80340150();}
void fn_80340254(){
 void *meta=lbl_80536604;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E3904,0x5);
 fn_800659C0(meta,lbl_804E3918,lbl_804E392C,lbl_804E3940,field);
}
void *fn_803402D4(){
 if(!lbl_8053661C) lbl_8053661C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8053661C;
}
void *fn_80340328(){
 if(!lbl_8053661C || !(reinterpret_cast<unsigned int *>(lbl_8053661C)[0x24/4]&4)) fn_803403E8();
 return lbl_8053661C;
}
}
#pragma pop
