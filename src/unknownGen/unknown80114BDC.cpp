#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8010CBD4();
void fn_8011232C();
void *fn_801149C4();
void fn_80114A00();
void fn_80114CA4();
extern char lbl_804956BC[];
extern char lbl_804956C8[];
extern void *lbl_80563784;
extern void *lbl_80563838;
void fn_80114C04();
void *fn_80114C7C();
void *fn_80114C9C();
}
extern "C" {
void fn_80114BDC(){
 fn_80066188((int)fn_80114C04);
}
void fn_80114C04(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563838,(int)fn_8011232C,(int)fn_80114C9C,(int)fn_80114C7C,(int)lbl_804956C8,36,(int)fn_80114A00,(int)fn_80114CA4,0,(int)lbl_804956BC);
}
void *fn_80114C7C(){return fn_801149C4();}
void *fn_80114C9C(){return lbl_80563784;}
}
#pragma pop
