#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_8003A518();
void fn_8003A554();
void fn_8003A6D8();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
extern char lbl_80468458[];
extern char lbl_8055D6D0[8];
extern void *lbl_80562014;
void fn_8003A644();
void *fn_8003A6B8();
}
extern "C" {
void fn_8003A61C(){
 fn_80066188((int)fn_8003A644);
}
void fn_8003A644(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80562014,(int)fn_80066B08,(int)fn_800237D0,(int)fn_8003A6B8,(int)lbl_80468458,16,(int)fn_8003A554,(int)fn_8003A6D8,0,(int)lbl_8055D6D0);
}
void *fn_8003A6B8(){return fn_8003A518();}
}
#pragma pop
