#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803050A8(void *,void *,void *,int,void *);
void fn_80305308(void *,void *,void *);
extern char lbl_80457FDC[];
extern char lbl_80457FEC[];
extern void *lbl_80536288;
}
extern "C" {
int fn_80361254(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+8);}
int fn_8036125C(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+40);}
int fn_80361264(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+40);}
void *fn_8036126C(){return lbl_80536288;}
void fn_8036127C(int p0,int p1){
 fn_80305308(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20),(void *)p1,lbl_80457FDC);
 fn_803050A8(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20),(void *)p1,lbl_80457FEC,0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+8));
}
}
#pragma pop
