#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beLOA_fieldInit();
void *beLOA_getMeta();
void beLOA_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_802B1AC8();
void *fn_802D4238();
void igGroup_register();
extern char beLOA_className[];
extern char beLOA_dependencies[];
extern char beLOA_meta[];
void beLOA_register();
void *beLOA_getMetaCall();
}
extern "C" {
void beLOA_arkRegister(){
 meta_registerNow((int)beLOA_register);
}
void beLOA_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beLOA_meta,(int)igGroup_register,(int)fn_8011148C,(int)beLOA_getMetaCall,(int)beLOA_className,96,(int)beLOA_vtableRead,(int)beLOA_fieldInit,(int)fn_802D4238,(int)beLOA_dependencies);
}
void *beLOA_getMetaCall(){return beLOA_getMeta();}
}
#pragma pop
