#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_8010CBD4();
void *fn_8010F130();
void fn_8010F16C();
void fn_8010F2AC();
extern char lbl_8055EFE4[8];
extern char lbl_8055EFEC[8];
extern void *lbl_80563638;
void fn_8010F21C();
void *fn_8010F28C();
}
extern "C" {
void fn_8010F1F4(){
 fn_80066188((int)fn_8010F21C);
}
void fn_8010F21C(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563638,(int)fn_80066B08,(int)fn_800237D0,(int)fn_8010F28C,(int)lbl_8055EFEC,12,(int)fn_8010F16C,(int)fn_8010F2AC,0,(int)lbl_8055EFE4);
}
void *fn_8010F28C(){return fn_8010F130();}
}
#pragma pop
