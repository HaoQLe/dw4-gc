#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_8002F724();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igDirectory_register();
void igIGBFile_fieldInit();
void *igIGBFile_getMeta();
void igIGBFile_vtableRead();
extern char igIGBFile_dependencies[];
extern char igIGBFile_className[];
extern void *igIGBFile_meta;
extern void *igDirectory_meta;
void igIGBFile_register();
void *igIGBFile_getMetaCall();
void *igIGBFile_parentMeta();
}
extern "C" {
void igIGBFile_arkRegister(){
 meta_registerNow((int)igIGBFile_register);
}
void igIGBFile_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igIGBFile_meta,(int)igDirectory_register,(int)igIGBFile_parentMeta,(int)igIGBFile_getMetaCall,(int)igIGBFile_className,308,(int)igIGBFile_vtableRead,(int)igIGBFile_fieldInit,(int)fn_8002F724,(int)igIGBFile_dependencies);
}
void *igIGBFile_getMetaCall(){return igIGBFile_getMeta();}
void *igIGBFile_parentMeta(){return igDirectory_meta;}
}
#pragma pop
