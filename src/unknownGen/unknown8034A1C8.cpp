#include <unknownGen.h>
#include <meta/beNDMWPanelWaza.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803050A8(void *,void *,void *,int,void *);
extern char lbl_80456970[];
}
extern "C" {
void beNDMWPanelWaza_virtual7C(int p0,int p1){
 fn_803050A8(reinterpret_cast<Meta::beNDMWPanelWaza *>((void *)p0)->_messenger,(void *)p1,lbl_80456970,0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+8));
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+20)=0;
}
}
#pragma pop
