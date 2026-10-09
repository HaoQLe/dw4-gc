#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_8002F724();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void igDirectory_register();
void igIGBFile_fieldInit();
void *igIGBFile_getMeta();
void igIGBFile_vtableRead();
extern char lbl_80465478[];
extern char lbl_80465498[];
extern void *lbl_80561A04;
extern void *lbl_80561CAC;
void igIGBFile_register();
void *igIGBFile_getMetaCall();
void *igIGBFile_parentMeta();
}
extern "C" {
void fn_8002F178(){
 fn_80066188((int)igIGBFile_register);
}
void igIGBFile_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561A04,(int)igDirectory_register,(int)igIGBFile_parentMeta,(int)igIGBFile_getMetaCall,(int)lbl_80465498,308,(int)igIGBFile_vtableRead,(int)igIGBFile_fieldInit,(int)fn_8002F724,(int)lbl_80465478);
}
void *igIGBFile_getMetaCall(){return igIGBFile_getMeta();}
void *igIGBFile_parentMeta(){return lbl_80561CAC;}
}
#pragma pop
