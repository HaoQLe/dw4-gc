#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void fn_8002F868();
void *fn_8002F970();
void fn_8003B8D4();
void fn_8003BBA8();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
extern char lbl_80468944[];
extern void *lbl_80561B18;
extern void *lbl_805620CC;
extern void *lbl_805620D0;
void fn_8003B994();
void *fn_8003B9FC();
}
extern "C" {
void fn_8003B96C(){
 fn_80066188((int)fn_8003B994);
}
void fn_8003B994(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_805620CC,(int)fn_8002F868,(int)fn_8003B9FC,(int)fn_8002F970,(int)lbl_80468944,12,(int)fn_8003B8D4,0,0,0);
}
void *fn_8003B9FC(){return lbl_80561B18;}
void *fn_8003BA04(){
 if(!lbl_805620D0 || !(reinterpret_cast<unsigned int *>(lbl_805620D0)[0x24/4]&4)) fn_8003BBA8();
 return lbl_805620D0;
}
}
#pragma pop
