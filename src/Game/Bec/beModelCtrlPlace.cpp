// beModelCtrl: placing and moving model RAMs, bounds (0x8030D260..0x8030D910).
#include "beModelCtrl.h"

// The original calls every function of these files; none is inlined.
#pragma auto_inline off

extern "C" {

// Places a new model RAM from its request's arguments: the model it goes on (name and RAM number), an offset and
// an optional rotation (angles), whether it stays locked to that model, and its hit parent (name and RAM number).
void fn_8030D260(beModelCtrl *self, beBaseInfoRam *ram)
{
    const beModelCtrlPool &mc = MC;
    beModelCtrlInfoRamData *data = ramDataOf(ram, mc.ONE);
    beModelCtrlInfoWork *work = data->_work;
    if (fn_80306FCC(self->_messenger) == 0) return;
    if (fn_80306FCC(self->_messenger) == 1) return;
    const char *name = fn_8030709C(self->_messenger, 0);
    int ramNo = fn_80306B00(self->_messenger, 0);
    Vec3f offset(fn_80306D28(self->_messenger, 0));
    const Vec3f &rotation = fn_80306C74(self->_messenger) == 2 ? fn_80306D28(self->_messenger, 1) : *reinterpret_cast<Vec3f *>(lbl_804F8AE0);
    float angleX = rotation.x, angleY = rotation.y, angleZ = rotation.z;
    bool lock = fn_80306A1C(self->_messenger, 0);
    setString(work->_hitParentName, fn_8030709C(self->_messenger, 2));
    work->_hitParentRamNo = fn_80306B00(self->_messenger, 1);
    fn_80305ED0(self->_messenger, mc.MODELCTRL, name, ramNo, mc.GETMATRIX);
    if (lock) {
        setRef(work->_posLockNode, static_cast<beModelCtrlNode2 *>(fn_80306FB4(self->_messenger, 0)));
        work->_posLockOffset[0] = offset.x;
        work->_posLockOffset[1] = offset.y;
        work->_posLockOffset[2] = offset.z;
        work->_isPosLock = true;
    }
    Matrix44 matrix;
    matrix = fn_80306DE8(self->_messenger, 0);
    fn_80128DC8(matrix.m, &offset.x);
    if (mc.zero != angleX) fn_801298F0(matrix.m, lbl_804F8AF8, angleX);
    if (mc.zero != angleY) fn_801298F0(matrix.m, lbl_804F8B04, angleY);
    if (mc.zero != angleZ) fn_801298F0(matrix.m, lbl_804F8B10, angleZ);
    setMatrix(data->_node, matrix.m);
    work->_aIHOffsetY = offset.y;
}

// Moves a model RAM as a message says: to a position (and rotation in degrees), or to a matrix.
void fn_8030D610(beModelCtrl *self, beBaseInfoRam *ram)
{
    beModelCtrlInfoRamData *data = ramDataOf(ram, kONE);
    if (fn_80306C74(self->_messenger) != 0) {
        Matrix44 matrix(data->_node->_m);
        fn_80128D90(matrix.m, &fn_80306D28(self->_messenger, 0).x);
        if (fn_80306C74(self->_messenger) == 2) {
            Vec3f degrees(fn_80306D28(self->_messenger, 1));
            fn_801292D4(matrix.m, kDegreesToRadians * degrees.x, kDegreesToRadians * degrees.y, kDegreesToRadians * degrees.z);
        }
        setMatrix(data->_node, matrix.m);
    } else if (fn_80306D58(self->_messenger) != 0) {
        Matrix44 matrix(fn_80306DE8(self->_messenger, 0));
        setMatrix(data->_node, matrix.m);
    }
}

// Sets a node's bound to a box moved by the node's matrix, creating the bound on first use.
void fn_8030D7F4(beModelCtrl *self, beModelCtrlNode2 *node, igAABox *box)
{
    igAABox *bound = static_cast<igAABox *>(node->_bound);
    if (!bound) {
        igAABox *created = igAABox_create(poolFor(self, lbl_8056225C));
        Ref<igAABox> holder(created);
        if (node->_bound) release(node->_bound);
        node->_bound = created;
        bound = holder;
    }
    bound->_min[0] = box->_min[0];
    bound->_min[1] = box->_min[1];
    bound->_min[2] = box->_min[2];
    bound->_max[0] = box->_max[0];
    bound->_max[1] = box->_max[1];
    bound->_max[2] = box->_max[2];
    fn_80122D04(bound, node->_m);
}

}
