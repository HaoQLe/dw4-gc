#include <unknownGen.h>
#include <meta/igContainsFunctionList.h>
#include <meta/igContainsRayFunctionList.h>
#include <meta/igContainsVecFunctionList.h>
#include <meta/igEmptyFunctionList.h>
#include <meta/igExtendByFunctionList.h>
#include <meta/igExtendByRayFunctionList.h>
#include <meta/igExtendByVecFunctionList.h>
#include <meta/igGetCenterFunctionList.h>
#include <meta/igIntersectionFunctionList.h>
#include <meta/igIsEmptyFunctionList.h>
#include <meta/igMatrix44fList.h>
#include <meta/igQuaternionfList.h>
#include <meta/igRayIntersectionFunctionList.h>
#include <meta/igTransformFunctionList.h>
#include <meta/igVec2fList.h>
#include <meta/igVec3ucList.h>
#include <meta/igVec4fList.h>
#include <meta/igVec4ucList.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8004155C(void *,void *,int);
extern void *igVolume_meta;
extern void *igVolumeList_meta;
extern void *igVectorMorphing_meta;
extern void *igVectorBlending_meta;
extern void *igVec4ucMetaField_meta;
extern void *lbl_805638DC;
extern void *lbl_805638E0;
extern void *lbl_805638E4;
extern void *igVec4fMetaField_meta;
extern void *lbl_805638EC;
extern void *igVec4fArrayMetaField_meta;
extern void *lbl_805638F4;
extern void *igVec4dMetaField_meta;
extern void *lbl_80563900;
extern void *lbl_80563904;
extern void *lbl_80563908;
extern void *igVec3ucMetaField_meta;
extern void *lbl_80563910;
extern void *lbl_80563914;
extern void *lbl_80563918;
extern void *igVec3fMetaField_meta;
extern void *lbl_80563920;
extern void *lbl_80563924;
extern void *lbl_80563928;
extern void *igVec3dMetaField_meta;
extern void *lbl_80563930;
extern void *lbl_80563934;
extern void *lbl_80563938;
extern void *igVec2fMetaField_meta;
extern void *lbl_80563940;
extern void *lbl_80563944;
extern void *lbl_80563948;
extern void *igVec2dMetaField_meta;
extern void *lbl_80563950;
extern void *lbl_80563954;
extern void *lbl_80563958;
extern void *igSphere_meta;
extern void *igRayList_meta;
extern void *igRay_meta;
extern void *igPlane_meta;
extern void *igMatrix44fMetaField_meta;
extern void *lbl_80563990;
extern void *lbl_80563994;
extern void *lbl_80563998;
extern void *igMatrix44dMetaField_meta;
extern void *lbl_805639A0;
extern void *lbl_805639A4;
extern void *lbl_805639A8;
extern void *igGetCenterFunctionList_meta;
extern void *igIsEmptyFunctionList_meta;
extern void *igEmptyFunctionList_meta;
extern void *igTransformFunctionList_meta;
extern void *igContainsVecFunctionList_meta;
extern void *igExtendByVecFunctionList_meta;
extern void *igContainsRayFunctionList_meta;
extern void *igExtendByRayFunctionList_meta;
extern void *igRayIntersectionFunctionList_meta;
extern void *igContainsFunctionList_meta;
extern void *igExtendByFunctionList_meta;
extern void *igIntersectionFunctionList_meta;
extern void *lbl_805639DC;
extern void *igMatrix44fList_meta;
extern void *lbl_805639E8;
extern void *igQuaternionfList_meta;
extern void *igVec4ucList_meta;
extern void *lbl_805639FC;
extern void *igVec4fList_meta;
extern void *igVec3fListList_meta;
extern void *igVec3ucList_meta;
extern void *igVec3fList_meta;
extern void *lbl_80563A1C;
extern void *igVec2fList_meta;
extern void *lbl_80563A28;
extern void *lbl_80563A2C;
extern void *igAABoxList_meta;
extern void *igAABox_meta;
}
extern "C" {
void *igVec4ucMetaField_virtual58(){return igVec4ucMetaField_meta;}
void *igVec4ucMetaField_virtual5C(){return lbl_805638DC;}
void *igVec4ucMetaField_virtual14C(){return lbl_805638E0;}
void *igVec4ucMetaField_virtual150(){return lbl_805638E4;}
void *igVec4fMetaField_virtual58(){return igVec4fMetaField_meta;}
void *igVec4fMetaField_virtual5C(){return lbl_805638EC;}
void *igVec4fArrayMetaField_virtual58(){return igVec4fArrayMetaField_meta;}
void *igVec4fArrayMetaField_virtual5C(){return lbl_805638F4;}
void *igVec4dMetaField_virtual58(){return igVec4dMetaField_meta;}
void *igVec4dMetaField_virtual5C(){return lbl_80563900;}
void *igVec4dMetaField_virtual14C(){return lbl_80563904;}
void *igVec4dMetaField_virtual150(){return lbl_80563908;}
void *igVec3ucMetaField_virtual58(){return igVec3ucMetaField_meta;}
void *igVec3ucMetaField_virtual5C(){return lbl_80563910;}
void *igVec3ucMetaField_virtual14C(){return lbl_80563914;}
void *igVec3ucMetaField_virtual150(){return lbl_80563918;}
void *igVec3fMetaField_virtual58(){return igVec3fMetaField_meta;}
void *igVec3fMetaField_virtual5C(){return lbl_80563920;}
void *igVec3fMetaField_virtual14C(){return lbl_80563924;}
void *igVec3fMetaField_virtual150(){return lbl_80563928;}
void *igVec3dMetaField_virtual58(){return igVec3dMetaField_meta;}
void *igVec3dMetaField_virtual5C(){return lbl_80563930;}
void *igVec3dMetaField_virtual14C(){return lbl_80563934;}
void *igVec3dMetaField_virtual150(){return lbl_80563938;}
void *igVec2fMetaField_virtual58(){return igVec2fMetaField_meta;}
void *igVec2fMetaField_virtual5C(){return lbl_80563940;}
void *igVec2fMetaField_virtual14C(){return lbl_80563944;}
void *igVec2fMetaField_virtual150(){return lbl_80563948;}
void *igVec2dMetaField_virtual58(){return igVec2dMetaField_meta;}
void *igVec2dMetaField_virtual5C(){return lbl_80563950;}
void *igVec2dMetaField_virtual14C(){return lbl_80563954;}
void *igVec2dMetaField_virtual150(){return lbl_80563958;}
void *igMatrix44fMetaField_virtual58(){return igMatrix44fMetaField_meta;}
void *igMatrix44fMetaField_virtual5C(){return lbl_80563990;}
void *igMatrix44fMetaField_virtual14C(){return lbl_80563994;}
void *igMatrix44fMetaField_virtual150(){return lbl_80563998;}
void *igMatrix44dMetaField_virtual58(){return igMatrix44dMetaField_meta;}
void *igMatrix44dMetaField_virtual5C(){return lbl_805639A0;}
void *igMatrix44dMetaField_virtual14C(){return lbl_805639A4;}
void *igMatrix44dMetaField_virtual150(){return lbl_805639A8;}
void *igAABox_virtual58(){return igAABox_meta;}
void *igAABoxList_virtual58(){return igAABoxList_meta;}
void *fn_8012EFFC(){return lbl_80563A2C;}
void *fn_8012F004(){return lbl_80563A28;}
void *igVec2fList_virtual58(){return igVec2fList_meta;}
void *fn_8012F014(){return lbl_80563A1C;}
void *igVec3ucList_virtual58(){return igVec3ucList_meta;}
void *igVec3fListList_virtual58(){return igVec3fListList_meta;}
void *igVec4fList_virtual58(){return igVec4fList_meta;}
void *fn_8012F034(){return lbl_805639FC;}
void *igVec4ucList_virtual58(){return igVec4ucList_meta;}
void *igQuaternionfList_virtual58(){return igQuaternionfList_meta;}
void *fn_8012F04C(){return lbl_805639E8;}
void *igMatrix44fList_virtual58(){return igMatrix44fList_meta;}
void *fn_8012F05C(){return lbl_805639DC;}
void *igIntersectionFunctionList_virtual58(){return igIntersectionFunctionList_meta;}
void *igExtendByFunctionList_virtual58(){return igExtendByFunctionList_meta;}
void *igContainsFunctionList_virtual58(){return igContainsFunctionList_meta;}
void *igRayIntersectionFunctionList_virtual58(){return igRayIntersectionFunctionList_meta;}
void *igExtendByRayFunctionList_virtual58(){return igExtendByRayFunctionList_meta;}
void *igContainsRayFunctionList_virtual58(){return igContainsRayFunctionList_meta;}
void *igExtendByVecFunctionList_virtual58(){return igExtendByVecFunctionList_meta;}
void *igContainsVecFunctionList_virtual58(){return igContainsVecFunctionList_meta;}
void *igTransformFunctionList_virtual58(){return igTransformFunctionList_meta;}
void *igEmptyFunctionList_virtual58(){return igEmptyFunctionList_meta;}
void *igIsEmptyFunctionList_virtual58(){return igIsEmptyFunctionList_meta;}
void *igGetCenterFunctionList_virtual58(){return igGetCenterFunctionList_meta;}
void *igPlane_virtual58(){return igPlane_meta;}
void *igRay_virtual58(){return igRay_meta;}
void *igRayList_virtual58(){return igRayList_meta;}
void *igSphere_virtual58(){return igSphere_meta;}
void *igVectorBlending_virtual58(){return igVectorBlending_meta;}
void *igVectorMorphing_virtual58(){return igVectorMorphing_meta;}
void *igVolumeList_virtual58(){return igVolumeList_meta;}
void *fn_8012F0FC(){return igAABox_meta;}
int igMatrix44fList_virtual5C(){return 64;}
int igQuaternionfList_virtual5C(){return 16;}
int igVec4ucList_virtual5C(){return 4;}
int igVec4fList_virtual5C(){return 16;}
int igVec3ucList_virtual5C(){return 3;}
int igVec2fList_virtual5C(){return 8;}
int igGetCenterFunctionList_virtual5C(){return 4;}
int igIsEmptyFunctionList_virtual5C(){return 4;}
int igEmptyFunctionList_virtual5C(){return 4;}
int igTransformFunctionList_virtual5C(){return 4;}
int igContainsVecFunctionList_virtual5C(){return 4;}
int igExtendByVecFunctionList_virtual5C(){return 4;}
int igContainsRayFunctionList_virtual5C(){return 4;}
int igExtendByRayFunctionList_virtual5C(){return 4;}
int igRayIntersectionFunctionList_virtual5C(){return 4;}
int igContainsFunctionList_virtual5C(){return 4;}
int igExtendByFunctionList_virtual5C(){return 4;}
int igIntersectionFunctionList_virtual5C(){return 4;}
void *igAABoxList_virtual60(){return igAABox_meta;}
void *fn_8012F19C(){return igMatrix44fList_meta;}
void *fn_8012F1A4(){return igQuaternionfList_meta;}
void *fn_8012F1AC(){return igVec4fList_meta;}
void *igVec3fListList_virtual60(){return igVec3fList_meta;}
void *fn_8012F1BC(){return igVec2fList_meta;}
void *igRayList_virtual60(){return igRay_meta;}
void *igVolumeList_virtual60(){return igVolume_meta;}
void igIntersectionFunctionList_virtual48(int p0){
 if((int)(int)(void *)reinterpret_cast<Meta::igIntersectionFunctionList *>((void *)p0)->_capacity>(int)(int)(void *)reinterpret_cast<Meta::igIntersectionFunctionList *>((void *)p0)->_count){
  fn_8004155C((void *)p0,(void *)reinterpret_cast<Meta::igIntersectionFunctionList *>((void *)p0)->_count,4);
  return;
 } else {
  return;
 }
}
void igExtendByFunctionList_virtual48(int p0){
 if((int)(int)(void *)reinterpret_cast<Meta::igExtendByFunctionList *>((void *)p0)->_capacity>(int)(int)(void *)reinterpret_cast<Meta::igExtendByFunctionList *>((void *)p0)->_count){
  fn_8004155C((void *)p0,(void *)reinterpret_cast<Meta::igExtendByFunctionList *>((void *)p0)->_count,4);
  return;
 } else {
  return;
 }
}
void igContainsFunctionList_virtual48(int p0){
 if((int)(int)(void *)reinterpret_cast<Meta::igContainsFunctionList *>((void *)p0)->_capacity>(int)(int)(void *)reinterpret_cast<Meta::igContainsFunctionList *>((void *)p0)->_count){
  fn_8004155C((void *)p0,(void *)reinterpret_cast<Meta::igContainsFunctionList *>((void *)p0)->_count,4);
  return;
 } else {
  return;
 }
}
void igRayIntersectionFunctionList_virtual48(int p0){
 if((int)(int)(void *)reinterpret_cast<Meta::igRayIntersectionFunctionList *>((void *)p0)->_capacity>(int)(int)(void *)reinterpret_cast<Meta::igRayIntersectionFunctionList *>((void *)p0)->_count){
  fn_8004155C((void *)p0,(void *)reinterpret_cast<Meta::igRayIntersectionFunctionList *>((void *)p0)->_count,4);
  return;
 } else {
  return;
 }
}
void igExtendByRayFunctionList_virtual48(int p0){
 if((int)(int)(void *)reinterpret_cast<Meta::igExtendByRayFunctionList *>((void *)p0)->_capacity>(int)(int)(void *)reinterpret_cast<Meta::igExtendByRayFunctionList *>((void *)p0)->_count){
  fn_8004155C((void *)p0,(void *)reinterpret_cast<Meta::igExtendByRayFunctionList *>((void *)p0)->_count,4);
  return;
 } else {
  return;
 }
}
void igContainsRayFunctionList_virtual48(int p0){
 if((int)(int)(void *)reinterpret_cast<Meta::igContainsRayFunctionList *>((void *)p0)->_capacity>(int)(int)(void *)reinterpret_cast<Meta::igContainsRayFunctionList *>((void *)p0)->_count){
  fn_8004155C((void *)p0,(void *)reinterpret_cast<Meta::igContainsRayFunctionList *>((void *)p0)->_count,4);
  return;
 } else {
  return;
 }
}
void igExtendByVecFunctionList_virtual48(int p0){
 if((int)(int)(void *)reinterpret_cast<Meta::igExtendByVecFunctionList *>((void *)p0)->_capacity>(int)(int)(void *)reinterpret_cast<Meta::igExtendByVecFunctionList *>((void *)p0)->_count){
  fn_8004155C((void *)p0,(void *)reinterpret_cast<Meta::igExtendByVecFunctionList *>((void *)p0)->_count,4);
  return;
 } else {
  return;
 }
}
void igContainsVecFunctionList_virtual48(int p0){
 if((int)(int)(void *)reinterpret_cast<Meta::igContainsVecFunctionList *>((void *)p0)->_capacity>(int)(int)(void *)reinterpret_cast<Meta::igContainsVecFunctionList *>((void *)p0)->_count){
  fn_8004155C((void *)p0,(void *)reinterpret_cast<Meta::igContainsVecFunctionList *>((void *)p0)->_count,4);
  return;
 } else {
  return;
 }
}
void igTransformFunctionList_virtual48(int p0){
 if((int)(int)(void *)reinterpret_cast<Meta::igTransformFunctionList *>((void *)p0)->_capacity>(int)(int)(void *)reinterpret_cast<Meta::igTransformFunctionList *>((void *)p0)->_count){
  fn_8004155C((void *)p0,(void *)reinterpret_cast<Meta::igTransformFunctionList *>((void *)p0)->_count,4);
  return;
 } else {
  return;
 }
}
void igEmptyFunctionList_virtual48(int p0){
 if((int)(int)(void *)reinterpret_cast<Meta::igEmptyFunctionList *>((void *)p0)->_capacity>(int)(int)(void *)reinterpret_cast<Meta::igEmptyFunctionList *>((void *)p0)->_count){
  fn_8004155C((void *)p0,(void *)reinterpret_cast<Meta::igEmptyFunctionList *>((void *)p0)->_count,4);
  return;
 } else {
  return;
 }
}
void igIsEmptyFunctionList_virtual48(int p0){
 if((int)(int)(void *)reinterpret_cast<Meta::igIsEmptyFunctionList *>((void *)p0)->_capacity>(int)(int)(void *)reinterpret_cast<Meta::igIsEmptyFunctionList *>((void *)p0)->_count){
  fn_8004155C((void *)p0,(void *)reinterpret_cast<Meta::igIsEmptyFunctionList *>((void *)p0)->_count,4);
  return;
 } else {
  return;
 }
}
void igGetCenterFunctionList_virtual48(int p0){
 if((int)(int)(void *)reinterpret_cast<Meta::igGetCenterFunctionList *>((void *)p0)->_capacity>(int)(int)(void *)reinterpret_cast<Meta::igGetCenterFunctionList *>((void *)p0)->_count){
  fn_8004155C((void *)p0,(void *)reinterpret_cast<Meta::igGetCenterFunctionList *>((void *)p0)->_count,4);
  return;
 } else {
  return;
 }
}
void igVec2fList_virtual48(int p0){
 if((int)(int)(void *)reinterpret_cast<Meta::igVec2fList *>((void *)p0)->_capacity>(int)(int)(void *)reinterpret_cast<Meta::igVec2fList *>((void *)p0)->_count){
  fn_8004155C((void *)p0,(void *)reinterpret_cast<Meta::igVec2fList *>((void *)p0)->_count,8);
  return;
 } else {
  return;
 }
}
void igVec3ucList_virtual48(int p0){
 if((int)(int)(void *)reinterpret_cast<Meta::igVec3ucList *>((void *)p0)->_capacity>(int)(int)(void *)reinterpret_cast<Meta::igVec3ucList *>((void *)p0)->_count){
  fn_8004155C((void *)p0,(void *)reinterpret_cast<Meta::igVec3ucList *>((void *)p0)->_count,3);
  return;
 } else {
  return;
 }
}
void igVec4fList_virtual48(int p0){
 if((int)(int)(void *)reinterpret_cast<Meta::igVec4fList *>((void *)p0)->_capacity>(int)(int)(void *)reinterpret_cast<Meta::igVec4fList *>((void *)p0)->_count){
  fn_8004155C((void *)p0,(void *)reinterpret_cast<Meta::igVec4fList *>((void *)p0)->_count,16);
  return;
 } else {
  return;
 }
}
void igVec4ucList_virtual48(int p0){
 if((int)(int)(void *)reinterpret_cast<Meta::igVec4ucList *>((void *)p0)->_capacity>(int)(int)(void *)reinterpret_cast<Meta::igVec4ucList *>((void *)p0)->_count){
  fn_8004155C((void *)p0,(void *)reinterpret_cast<Meta::igVec4ucList *>((void *)p0)->_count,4);
  return;
 } else {
  return;
 }
}
void igQuaternionfList_virtual48(int p0){
 if((int)(int)(void *)reinterpret_cast<Meta::igQuaternionfList *>((void *)p0)->_capacity>(int)(int)(void *)reinterpret_cast<Meta::igQuaternionfList *>((void *)p0)->_count){
  fn_8004155C((void *)p0,(void *)reinterpret_cast<Meta::igQuaternionfList *>((void *)p0)->_count,16);
  return;
 } else {
  return;
 }
}
void igMatrix44fList_virtual48(int p0){
 if((int)(int)(void *)reinterpret_cast<Meta::igMatrix44fList *>((void *)p0)->_capacity>(int)(int)(void *)reinterpret_cast<Meta::igMatrix44fList *>((void *)p0)->_count){
  fn_8004155C((void *)p0,(void *)reinterpret_cast<Meta::igMatrix44fList *>((void *)p0)->_count,64);
  return;
 } else {
  return;
 }
}
}
#pragma pop
