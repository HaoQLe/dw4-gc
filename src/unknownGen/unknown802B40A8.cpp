#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beWaterPlainInfoRam_arkRegister();
void *igModelViewMatrixBoneSelectList_2_getMeta();
void igModelViewMatrixBoneSelectList_2_vtableRead();
void igObjectList_register();
extern char lbl_8041CAF8[];
extern char lbl_804CEE54[];
extern char igModelViewMatrixBoneSelectList_80534578_meta[];
extern void *beWaterPlainInfoRam_meta;
void igModelViewMatrixBoneSelectList_2_register();
void *igModelViewMatrixBoneSelectList_2_getMetaCall();
}
extern "C" {
void fn_802B40A8(){
 meta_registerNow((int)igModelViewMatrixBoneSelectList_2_register);
}
void igModelViewMatrixBoneSelectList_2_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)igModelViewMatrixBoneSelectList_80534578_meta,(int)igObjectList_register,(int)fn_80024180,(int)igModelViewMatrixBoneSelectList_2_getMetaCall,(int)lbl_8041CAF8,20,(int)igModelViewMatrixBoneSelectList_2_vtableRead,0,0,(int)lbl_804CEE54);
}
void *igModelViewMatrixBoneSelectList_2_getMetaCall(){return igModelViewMatrixBoneSelectList_2_getMeta();}
void *beWaterPlainInfoRam_getMeta(){
 if(!beWaterPlainInfoRam_meta || !(reinterpret_cast<unsigned int *>(beWaterPlainInfoRam_meta)[0x24/4]&4)) beWaterPlainInfoRam_arkRegister();
 return beWaterPlainInfoRam_meta;
}
}
#pragma pop
