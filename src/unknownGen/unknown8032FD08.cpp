#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
void *fn_8032FABC();
void fn_8032FB08();
void fn_8032FDC4();
void fn_80333F14();
extern char lbl_80453A20[];
extern char lbl_80535EB0[];
void fn_8032FD30();
void *fn_8032FDA4();
}
extern "C" {
void fn_8032FD08(){
 fn_80066188((int)fn_8032FD30);
}
void fn_8032FD30(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535EB0,(int)fn_80333F14,(int)fn_8032B8A4,(int)fn_8032FDA4,(int)lbl_80453A20,92,(int)fn_8032FB08,(int)fn_8032FDC4,0,0);
}
void *fn_8032FDA4(){return fn_8032FABC();}
}
#pragma pop
