#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80273388(void *,double);
void fn_802734A8(void *,void *,int);
void fn_80273934(void *,void *);
void fn_802742EC(void *,void *,int);
void fn_8027B668(int);
void fn_80281A40(void *,int,void *);
extern char lbl_80416700[];
extern char lbl_805611DC[4];
extern char lbl_805611E0[3];
extern char lbl_80567208[8];
}
extern "C" {
void fn_8027BC14(int p0){
 fn_802742EC((void *)p0,lbl_80416700,23);
 fn_802734A8((void *)p0,(void *)fn_8027B668,0);
 fn_80281A40((void *)p0,2,lbl_805611DC);
 fn_80273388((void *)p0,*reinterpret_cast<double *>((lbl_80567208+0)));
 fn_80273934((void *)p0,lbl_805611E0);
}
}
#pragma pop
