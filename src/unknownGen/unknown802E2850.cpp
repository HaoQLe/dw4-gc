#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8003EC68(void *,int);
void fn_8004D4BC(void *,float);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beCameraMode_metaObject();
void *igViewerSceneInfoManager_metaObject();
void *igViewerParameters_metaObject();
extern char lbl_8041D5B0[];
extern char beCameraCtrl_fieldTypes[];
extern char beCameraCtrl_fieldNames[];
extern char beCameraCtrl_fieldStorage[];
extern char beCameraCtrl_fieldOffsets[];
extern void *beCameraCtrl_meta;
}
extern "C" {
void beCameraCtrl_fieldInit(){
 void *value0=beCameraCtrl_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beCameraCtrl_fieldTypes,13);
 void *value2=meta_field(value0,value1);
 void *value3=igViewerSceneInfoManager_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=igViewerParameters_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+60)=0;
 void *value6=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=beCameraMode_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 void *value8=meta_field(value0,(reinterpret_cast<char *>(value1)+11));
 fn_8004D4BC(value8,*reinterpret_cast<float *>((lbl_8041D5B0+0)));
 void *value9=meta_field(value0,(reinterpret_cast<char *>(value1)+12));
 fn_8003EC68(value9,1);
 meta_setupFields(value0,beCameraCtrl_fieldNames,beCameraCtrl_fieldStorage,beCameraCtrl_fieldOffsets,value1);
}
}
#pragma pop
