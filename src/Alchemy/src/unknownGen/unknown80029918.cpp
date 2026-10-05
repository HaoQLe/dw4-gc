#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800284EC();
void *fn_800297E4();
void fn_80029820();
void fn_800299D4();
void fn_8002EABC();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
extern char lbl_80464258[];
extern char lbl_8055D23C[8];
extern void *lbl_80561738;
void fn_80029940();
void *fn_800299B4();
}
extern "C" {
void fn_80029918(){
 fn_80066188((int)fn_80029940);
}
void fn_80029940(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561738,(int)fn_8002EABC,(int)fn_800284EC,(int)fn_800299B4,(int)lbl_80464258,24,(int)fn_80029820,(int)fn_800299D4,0,(int)lbl_8055D23C);
}
void *fn_800299B4(){return fn_800297E4();}
}
#pragma pop
