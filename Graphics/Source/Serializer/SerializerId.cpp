#include "../../Header/Serializer/SerializerId.h"
#include "../../Header/Scene/Light/DirectionalLight.h"
#include "../../Header/Scene/Light/PointLight.h"
#include "../../Header/Scene/Camera/ParallelCamera.h"
#include "../../Header/Scene/Camera/PerspectiveCamera.h"
#include "../../Header/Scene/Fog/Formula/FormulaFog.h"
#include "../../Header/Scene/Surface/Flat/LineFlatSurface.h"
#include "../../Header/Scene/Surface/Uv/CheckedUvSurface.h"
#include "../../Header/Scene/Shape/Set/SetDifferenceObject.h"
#include "../../Header/Scene/Shape/Set/UnionObject.h"
#include "../../Header/Scene/Shape/Composite/TransformableObject.h"
#include "../../Header/Scene/Shape/Traced/FlatPolygon.h"
#include "../../Header/Scene/Shape/Marched/Torus.h"
#include "../../Header/Scene/Shape/Traced/Pyramid.h"
#include "../../Header/Scene/Shape/Traced/Prism.h"
#include "../../Header/Scene/Shape/Traced/Box.h"
#include "../../Header/Scene/Shape/Traced/Cylinder.h"
#include "../../Header/Scene/Shape/Traced/Plane.h"
#include "../../Header/Scene/Shape/Traced/Sphere.h"
#include "../../Header/Scene/Shape/Marched/Composite/RepeatedMarchedObject.h"
#include "../../Header/Scene/Shape/Marched/MarchedSphere.h"
#include "../../Header/Scene/Shape/Marched/MarchedCylinder.h"
#include "../../Header/Scene/Shape/Traced/Cone.h"
#include "../../Header/Scene/Shape/Marched/MarchedCone.h"

std::map<std::type_index, std::string> SerializerId::Id = {
		{typeid(PerspectiveCamera), "Camera.Perspective"},
		{typeid(ParallelCamera), "Camera.Parallel"},
		{typeid(PointLight), "Light.Point"},
		{typeid(DirectionalLight), "Light.Directional"},
		{typeid(SolidColorSky), "Sky.Solid"},
		{typeid(SkyBox), "Sky.SkyBox"},
		{typeid(SolidFlatSurface), "Surface.Flat.Solid"},
		{typeid(RotatedFlatSurface), "Surface.Flat.Rotated"},
		{typeid(CheckedFlatSurface), "Surface.Flat.Checked"},
		{typeid(LineFlatSurface), "Surface.Flat.Line"},
		{typeid(SolidUvSurface), "Surface.Uv.Solid"},
		{typeid(GeneratedSquareUvSurface), "Surface.Uv.GeneratedSquare"},
		{typeid(TexturedUvSurface), "Surface.Uv.Textured"},
		{typeid(CheckedUvSurface), "Surface.Uv.Checked"},
		{typeid(Sphere), "Object.Traced.Sphere"},
		{typeid(Plane), "Object.Traced.Plane"},
		{typeid(Cylinder), "Object.Traced.Cylinder"},
		{typeid(TriangleMesh), "Object.Traced.Mesh"},
		{typeid(TransformableObject), "Object.Composite.Transformable"},
		{typeid(Box), "Object.Traced.Box"},
		{typeid(Prism), "Object.Traced.Prism"},
		{typeid(Pyramid), "Object.Traced.Pyramid"},
		{typeid(Cone), "Object.Traced.Cone"},
		{typeid(Torus), "Object.Marched.Torus"},
		{typeid(MarchedSphere), "Object.Marched.Sphere"},
		{typeid(MarchedCone), "Object.Marched.Cone"},
		{typeid(MarchedCylinder), "Object.Marched.Cylinder"},
		{typeid(RepeatedMarchedObject), "Object.Marched.Composite.Repeated"},
		{typeid(FlatPolygon), "Object.Traced.FlatPolygon"},
		{typeid(SetDifferenceObject), "Object.Set.Difference"},
		{typeid(UnionObject), "Object.Set.Union"},
		{typeid(FormulaFog), "Fog.Formula"},
};
