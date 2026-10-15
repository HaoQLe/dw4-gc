#include <unknownGen.h>
#include <meta/igViewManager.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80068128(void *,void *);
void *fn_8011D0D4(void *,int);
extern void *igViewManager_meta;
extern void *igViewModel_meta;
}
extern "C" {
void igViewManager_virtual34(int p0){
 fn_8011D0D4(reinterpret_cast<Meta::igViewManager *>((void *)p0)->_viewMode,(int)(int)(reinterpret_cast<Meta::igViewManager *>((void *)p0)->_viewModel));
}
void *igViewManager_virtual58(){return igViewManager_meta;}
void igViewMode_virtual5C(int p0,int p1,int p2,int p3,int p4,int p5){
 fn_80068128((void *)p1,igViewModel_meta);
}
}
#pragma pop
