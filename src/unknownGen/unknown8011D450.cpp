#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *lbl_80563738;
extern void *lbl_8056373C;
extern void *lbl_80563750;
extern void *lbl_805637A4;
extern void *lbl_805637BC;
extern void *lbl_805637C8;
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
void *igGuiComponentController_virtual58(){return lbl_80563738;}
void *fn_8011D494(){return lbl_8056373C;}
void *igGuiComponent_virtual58(){return lbl_80563750;}
void *igFieldChangeView_virtual58(){return lbl_805637A4;}
int igFieldChangeView_virtual5C(){return 1;}
void *igEventDispatcher_virtual58(){return lbl_805637BC;}
void *igDefaultAspect_virtual58(){return lbl_805637C8;}
}
#pragma pop
