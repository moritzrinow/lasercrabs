#include "components.h"

Transform::Transform()
	: pos(Vec3::zero), rot(Quat::identity)
{

}

void Transform::awake()
{
}

void Transform::mat(Mat4* m)
{
	*m = Mat4(rot);
	m->translation(pos);
}

void Transform::getWorldTransform(btTransform& world) const
{
	world.setRotation(rot);
	world.setOrigin(pos);
}

void Transform::setWorldTransform(const btTransform& world)
{
	pos = world.getOrigin();
	rot = world.getRotation();
}

RigidBody::RigidBody(btRigidBody::btRigidBodyConstructionInfo& info)
	: btBody(info)
{

}

void RigidBody::awake()
{
}

RigidBody::~RigidBody()
{
	btBody.~btRigidBody();
}
