#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802B436C();
void *igModelViewMatrixBoneSelectList_2_getMeta();
void igModelViewMatrixBoneSelectList_2_vtableRead();
void igObjectList_register();
extern char lbl_8041CAF8[];
extern char lbl_804CEE54[];
extern char lbl_80534578[];
extern void *lbl_8053457C;
void igModelViewMatrixBoneSelectList_2_register();
void *igModelViewMatrixBoneSelectList_2_getMetaCall();
}
extern "C" {
void fn_802B40A8(){
 fn_80066188((int)igModelViewMatrixBoneSelectList_2_register);
}
void igModelViewMatrixBoneSelectList_2_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534578,(int)igObjectList_register,(int)fn_80024180,(int)igModelViewMatrixBoneSelectList_2_getMetaCall,(int)lbl_8041CAF8,20,(int)igModelViewMatrixBoneSelectList_2_vtableRead,0,0,(int)lbl_804CEE54);
}
void *igModelViewMatrixBoneSelectList_2_getMetaCall(){return igModelViewMatrixBoneSelectList_2_getMeta();}
void *beWaterPlainInfoRam_getMeta(){
 if(!lbl_8053457C || !(reinterpret_cast<unsigned int *>(lbl_8053457C)[0x24/4]&4)) fn_802B436C();
 return lbl_8053457C;
}
}
#pragma pop
