#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8010DF8C();
void fn_80402E28();
void igNormalsRenderer_fieldInit();
void *igNormalsRenderer_getMeta();
void igNormalsRenderer_vtableRead();
void igRenderer_register();
extern char igNormalsRenderer_className[];
extern char igNormalsRenderer_dependencies[];
extern char igNormalsRenderer_meta[];
void igNormalsRenderer_register();
void *igNormalsRenderer_getMetaCall();
}
extern "C" {
void igNormalsRenderer_arkRegister(){
 meta_registerNow((int)igNormalsRenderer_register);
}
void igNormalsRenderer_register(){
 fn_80402E28();
 meta_registerClass(0,(int)igNormalsRenderer_meta,(int)igRenderer_register,(int)fn_8010DF8C,(int)igNormalsRenderer_getMetaCall,(int)igNormalsRenderer_className,48,(int)igNormalsRenderer_vtableRead,(int)igNormalsRenderer_fieldInit,0,(int)igNormalsRenderer_dependencies);
}
void *igNormalsRenderer_getMetaCall(){return igNormalsRenderer_getMeta();}
}
#pragma pop
