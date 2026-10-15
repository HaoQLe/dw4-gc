#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beNDMWTitle2_metaObject();
void *beNDMWStatus_metaObject();
void *beNDMWStageCtl_metaObject();
void *beNDMWSaveIntf_metaObject();
void *beNDMWSaveCtrl_metaObject();
void *beNDMWPanelWaza_metaObject();
void *beNDMWMdlPlayer2_metaObject();
void *beNDMWMdlPlayer_metaObject();
void *beNDMWMdlPBullet_metaObject();
void *beNDMWMdlObject_metaObject();
void *beNDMWMdlMapCursor_metaObject();
void *beNDMWMdlMapBase_metaObject();
void *beNDMWMdlItem_metaObject();
void *beNDMWMdlEnemy_metaObject();
void *beNDMWMdlEffect_metaObject();
void *beNDMWMdlEBullet_metaObject();
void *beNDMWLogo_metaObject();
void *beNDMWLoadIntf2_metaObject();
void *beNDMWLoadCtrl2_metaObject();
void *beNDMWGameRam_metaObject();
void *beNDMWAfsSetup_metaObject();
extern char libNdmwRuntimePlugin_fieldTypes[];
extern char libNdmwRuntimePlugin_fieldNames[];
extern char libNdmwRuntimePlugin_fieldStorage[];
extern char libNdmwRuntimePlugin_fieldOffsets[];
extern void *libNdmwRuntimePlugin_meta;
}
extern "C" {
void libNdmwRuntimePlugin_fieldInit(){
 void *value0=libNdmwRuntimePlugin_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,libNdmwRuntimePlugin_fieldTypes,21);
 void *value2=meta_field(value0,value1);
 void *value3=beNDMWAfsSetup_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=beNDMWStageCtl_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 void *value6=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=beNDMWPanelWaza_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 void *value8=meta_field(value0,(reinterpret_cast<char *>(value1)+3));
 void *value9=beNDMWLogo_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+56)=value9;
 void *value10=meta_field(value0,(reinterpret_cast<char *>(value1)+4));
 void *value11=beNDMWTitle2_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value10)+56)=value11;
 void *value12=meta_field(value0,(reinterpret_cast<char *>(value1)+5));
 void *value13=beNDMWLoadCtrl2_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value12)+56)=value13;
 void *value14=meta_field(value0,(reinterpret_cast<char *>(value1)+6));
 void *value15=beNDMWLoadIntf2_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value14)+56)=value15;
 void *value16=meta_field(value0,(reinterpret_cast<char *>(value1)+7));
 void *value17=beNDMWSaveCtrl_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value16)+56)=value17;
 void *value18=meta_field(value0,(reinterpret_cast<char *>(value1)+8));
 void *value19=beNDMWSaveIntf_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value18)+56)=value19;
 void *value20=meta_field(value0,(reinterpret_cast<char *>(value1)+9));
 void *value21=beNDMWGameRam_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value20)+56)=value21;
 void *value22=meta_field(value0,(reinterpret_cast<char *>(value1)+10));
 void *value23=beNDMWStatus_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value22)+56)=value23;
 void *value24=meta_field(value0,(reinterpret_cast<char *>(value1)+11));
 void *value25=beNDMWMdlPlayer_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value24)+56)=value25;
 void *value26=meta_field(value0,(reinterpret_cast<char *>(value1)+12));
 void *value27=beNDMWMdlPlayer2_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value26)+56)=value27;
 void *value28=meta_field(value0,(reinterpret_cast<char *>(value1)+13));
 void *value29=beNDMWMdlPBullet_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value28)+56)=value29;
 void *value30=meta_field(value0,(reinterpret_cast<char *>(value1)+14));
 void *value31=beNDMWMdlEnemy_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value30)+56)=value31;
 void *value32=meta_field(value0,(reinterpret_cast<char *>(value1)+15));
 void *value33=beNDMWMdlEBullet_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value32)+56)=value33;
 void *value34=meta_field(value0,(reinterpret_cast<char *>(value1)+16));
 void *value35=beNDMWMdlObject_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value34)+56)=value35;
 void *value36=meta_field(value0,(reinterpret_cast<char *>(value1)+17));
 void *value37=beNDMWMdlItem_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value36)+56)=value37;
 void *value38=meta_field(value0,(reinterpret_cast<char *>(value1)+18));
 void *value39=beNDMWMdlEffect_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value38)+56)=value39;
 void *value40=meta_field(value0,(reinterpret_cast<char *>(value1)+19));
 void *value41=beNDMWMdlMapBase_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value40)+56)=value41;
 void *value42=meta_field(value0,(reinterpret_cast<char *>(value1)+20));
 void *value43=beNDMWMdlMapCursor_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value42)+56)=value43;
 meta_setupFields(value0,libNdmwRuntimePlugin_fieldNames,libNdmwRuntimePlugin_fieldStorage,libNdmwRuntimePlugin_fieldOffsets,value1);
}
}
#pragma pop
