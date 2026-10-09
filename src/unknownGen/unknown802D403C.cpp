#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beLOA_fieldInit();
void *beLOA_getMeta();
void beLOA_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_802B1AC8();
void *fn_802D4238();
void igGroup_register();
extern char lbl_8041FC38[];
extern char lbl_804D19A4[];
extern char lbl_80535174[];
void beLOA_register();
void *beLOA_getMetaCall();
}
extern "C" {
void fn_802D403C(){
 fn_80066188((int)beLOA_register);
}
void beLOA_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535174,(int)igGroup_register,(int)fn_8011148C,(int)beLOA_getMetaCall,(int)lbl_8041FC38,96,(int)beLOA_vtableRead,(int)beLOA_fieldInit,(int)fn_802D4238,(int)lbl_804D19A4);
}
void *beLOA_getMetaCall(){return beLOA_getMeta();}
}
#pragma pop
