#include <unknownGen.h>
#include <meta/igPointerList.h>
#include <meta/igVec3fListList.h>
#include <meta/igVector3MorphData.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *igMorphedGeometryAttr_meta;
extern void *igModelViewMatrixAttr_meta;
extern void *igMipMapAttr_meta;
extern void *igMatrixOptStateAttr_meta;
extern void *igMatrixConstantAttr_meta;
}
extern "C" {
void *igVector3MorphData_virtual70(int p0,int p1,int p2){
 void *value0;
 void *value1;
 void *value2;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(reinterpret_cast<Meta::igVec3fListList *>(reinterpret_cast<Meta::igVector3MorphData *>((void *)p0)->_targets)->_data)+(p2<<2)))+16);
 if((unsigned int)(int)value0==(unsigned int)*reinterpret_cast<int *>(reinterpret_cast<char *>(reinterpret_cast<Meta::igPointerList *>(reinterpret_cast<Meta::igVector3MorphData *>((void *)p0)->_activeTargets)->_data)+(p1<<2))){
  return (void *)p0;
 }
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+40)=1;
 value1=reinterpret_cast<Meta::igVector3MorphData *>((void *)p0)->_activeTargets;
 value2=reinterpret_cast<Meta::igPointerList *>(value1)->_data;
 *reinterpret_cast<int *>(reinterpret_cast<char *>(value2)+(p1<<2))=(int)(int)value0;
 return value2;
}
void *igMorphedGeometryAttr_virtual58(){return igMorphedGeometryAttr_meta;}
void *igModelViewMatrixAttr_virtual58(){return igModelViewMatrixAttr_meta;}
void *igMipMapAttr_virtual58(){return igMipMapAttr_meta;}
void *igMatrixOptStateAttr_virtual58(){return igMatrixOptStateAttr_meta;}
void igMatrixOptStateAttr_virtual80(void *object,unsigned char value){*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+12)=value;}
void *igMatrixConstantAttr_virtual58(){return igMatrixConstantAttr_meta;}
}
#pragma pop
