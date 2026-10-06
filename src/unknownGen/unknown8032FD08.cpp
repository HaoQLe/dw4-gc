#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
void *fn_8032FABC();
void fn_8032FB08();
void fn_803300D0();
void fn_80333F14();
extern char lbl_80453A20[];
extern char lbl_804E1D6C[];
extern char lbl_804E1D74[];
extern char lbl_804E1D7C[];
extern char lbl_804E1D84[];
extern void *lbl_80535EB0;
extern void *lbl_80535EBC;
void fn_8032FD30();
void *fn_8032FDA4();
void fn_8032FDC4();
}
extern "C" {
void fn_8032FD08(){
 fn_80066188((int)fn_8032FD30);
}
void fn_8032FD30(){
 fn_803250AC();
 fn_80066204(0,(int)&lbl_80535EB0,(int)fn_80333F14,(int)fn_8032B8A4,(int)fn_8032FDA4,(int)lbl_80453A20,92,(int)fn_8032FB08,(int)fn_8032FDC4,0,0);
}
void *fn_8032FDA4(){return fn_8032FABC();}
void fn_8032FDC4(){
 void *meta=lbl_80535EB0;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E1D6C,0x2);
 fn_800659C0(meta,lbl_804E1D74,lbl_804E1D7C,lbl_804E1D84,field);
}
void *fn_8032FE44(void *object){
 fn_803300D0();
 return fn_8006546C(lbl_80535EBC,object);
}
void *fn_8032FE84(){
 if(!lbl_80535EBC || !(reinterpret_cast<unsigned int *>(lbl_80535EBC)[0x24/4]&4)) fn_803300D0();
 return lbl_80535EBC;
}
}
#pragma pop
