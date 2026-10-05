#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80027360();
void fn_80066188(int);
extern void *lbl_80561684;
void fn_80027338();
}
extern "C" {
void *fn_800272FC(){
 if(!lbl_80561684 || !(reinterpret_cast<unsigned int *>(lbl_80561684)[0x24/4]&4)) fn_80027338();
 return lbl_80561684;
}
void fn_80027338(){
 fn_80066188((int)fn_80027360);
}
}
#pragma pop
