#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *igGuiComponentController_meta;
extern void *igGuiComponentAspect_meta;
extern void *igGuiComponent_meta;
extern void *igFieldChangeView_meta;
extern void *igEventDispatcher_meta;
extern void *igDefaultAspect_meta;
}
extern "C" {
int fn_8011D450(){return 0;}
void fn_8011D458(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+20)=value;}
void fn_8011D460(int p0,int p1,int p2){
 if((unsigned char)p2){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+20)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20)|p1);
  return;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+20)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20)&~p1);
}
void fn_8011D488(){}
void *igGuiComponentController_virtual58(){return igGuiComponentController_meta;}
void *fn_8011D494(){return igGuiComponentAspect_meta;}
void *igGuiComponent_virtual58(){return igGuiComponent_meta;}
void *igFieldChangeView_virtual58(){return igFieldChangeView_meta;}
int igFieldChangeView_virtual5C(){return 1;}
void *igEventDispatcher_virtual58(){return igEventDispatcher_meta;}
void *igDefaultAspect_virtual58(){return igDefaultAspect_meta;}
}
#pragma pop
