#include <unknownGen.h>
#include <meta/beTargetObj.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8028A398(void *,void *);
void fn_8028A400(void *,void *);
void *fn_8028A730(void *,void *);
extern void *lbl_80534698;
extern void *lbl_80534FBC;
extern char lbl_80535BA8[];
extern char lbl_80535BAC[];
}
extern "C" {
void beTargetObj_virtual5C(int p0){
 fn_8028A398(reinterpret_cast<Meta::beTargetObj *>((void *)p0)->_insight,(void *)p0);
}
void beTargetObj_virtual60(int p0){
 fn_8028A400(reinterpret_cast<Meta::beTargetObj *>((void *)p0)->_insight,(void *)p0);
}
void beTargetObj_virtual64(int p0){
 void *value0=fn_8028A730(reinterpret_cast<Meta::beTargetObj *>((void *)p0)->_insight,lbl_80534698);
 *reinterpret_cast<void * *>((lbl_80535BA8+0))=value0;
 void *value1=fn_8028A730(reinterpret_cast<Meta::beTargetObj *>((void *)p0)->_insight,lbl_80534FBC);
 *reinterpret_cast<void * *>((lbl_80535BAC+0))=value1;
}
}
#pragma pop
