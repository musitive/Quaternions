// #ifndef DF_QUATERNION_MATH
// #define DF_QUATERNION_MATH
//
// // Dependency:
// #include "glm.hpp"
// #include "gtc/quaternion.hpp"
//
// namespace df
// {
// 	/// @addtogroup gtx_quaternion
// 	/// @{
//
// 	//! Compute a cross product between a quaternion and a vector. 
// 	///
// 	/// @see gtx_quaternion
// 	template <typename valType> 
// 	detail::tvec3<valType> cross(
// 		detail::tquat<valType> const & q, 
// 		detail::tvec3<valType> const & v);
//
// 	//! Compute a cross product between a vector and a quaternion.
// 	///
// 	/// @see gtx_quaternion
// 	template <typename valType> 
// 	detail::tvec3<valType> cross(
// 		detail::tvec3<valType> const & v, 
// 		detail::tquat<valType> const & q);
//
// 	//! Compute a point on a path according squad equation. 
// 	//! q1 and q2 are control points; s1 and s2 are intermediate control points.
// 	///
// 	/// @see gtx_quaternion
// 	template <typename valType> 
// 	detail::tquat<valType> squad(
// 		detail::tquat<valType> const & q1, 
// 		detail::tquat<valType> const & q2, 
// 		detail::tquat<valType> const & s1, 
// 		detail::tquat<valType> const & s2, 
// 		valType const & h);
//
// 	//! Returns an intermediate control point for squad interpolation.
// 	///
// 	/// @see gtx_quaternion
// 	template <typename valType> 
// 	detail::tquat<valType> intermediate(
// 		detail::tquat<valType> const & prev, 
// 		detail::tquat<valType> const & curr, 
// 		detail::tquat<valType> const & next);
//
// 	//! Returns a exp of a quaternion. 
// 	///
// 	/// @see gtx_quaternion
//     template <typename valType> 
// 	detail::tquat<valType> exp(
// 		detail::tquat<valType> const & q);
//
// 	//! Returns a log of a quaternion. 
// 	///
// 	/// @see gtx_quaternion
//     template <typename valType> 
// 	detail::tquat<valType> log(
// 		detail::tquat<valType> const & q);
//
// 	/// Returns x raised to the y power.
// 	///
// 	/// @see gtx_quaternion
//     template <typename valType> 
// 	detail::tquat<valType> pow(
// 		detail::tquat<valType> const & x, 
// 		valType const & y);
//
// 	//! Returns quarternion square root.
// 	///
// 	/// @see gtx_quaternion
// 	//template <typename valType> 
// 	//detail::tquat<valType> sqrt(
// 	//	detail::tquat<valType> const & q);
//
// 	//! Rotates a 3 components vector by a quaternion. 
// 	///
// 	/// @see gtx_quaternion
// 	template <typename valType> 
// 	detail::tvec3<valType> rotate(
// 		detail::tquat<valType> const & q, 
// 		detail::tvec3<valType> const & v);
//
// 	/// Rotates a 4 components vector by a quaternion.
// 	///
// 	/// @see gtx_quaternion
// 	template <typename valType> 
// 	detail::tvec4<valType> rotate(
// 		detail::tquat<valType> const & q, 
// 		detail::tvec4<valType> const & v);
//
// 	/// Extract the real component of a quaternion.
// 	///
// 	/// @see gtx_quaternion
// 	template <typename valType> 
// 	valType extractRealComponent(
// 		detail::tquat<valType> const & q);
//
// 	/// Converts a quaternion to a 3 * 3 matrix. 
// 	///
// 	/// @see gtx_quaternion
// 	template <typename valType> 
// 	detail::tmat3x3<valType> toMat3(
// 		detail::tquat<valType> const & x){return mat3_cast(x);}
//
// 	/// Converts a quaternion to a 4 * 4 matrix. 
// 	///
// 	/// @see gtx_quaternion
// 	template <typename valType> 
// 	detail::tmat4x4<valType> toMat4(
// 		detail::tquat<valType> const & x){return mat4_cast(x);}
//
// 	/// Converts a 3 * 3 matrix to a quaternion. 
// 	///
// 	/// @see gtx_quaternion
// 	template <typename valType> 
// 	detail::tquat<valType> toQuat(
// 		detail::tmat3x3<valType> const & x){return quat_cast(x);}
//
// 	/// Converts a 4 * 4 matrix to a quaternion. 
// 	///
// 	/// @see gtx_quaternion
// 	template <typename valType> 
// 	detail::tquat<valType> toQuat(
// 		detail::tmat4x4<valType> const & x){return quat_cast(x);}
//
// 	/// Quaternion interpolation using the rotation short path. 
// 	///
// 	/// @see gtx_quaternion
// 	template <typename T>
// 	detail::tquat<T> shortMix(
// 		detail::tquat<T> const & x, 
// 		detail::tquat<T> const & y, 
// 		T const & a);
//
// 	/// Quaternion normalized linear interpolation. 
// 	///
// 	/// @see gtx_quaternion
// 	template <typename T>
// 	detail::tquat<T> fastMix(
// 		detail::tquat<T> const & x, 
// 		detail::tquat<T> const & y, 
// 		T const & a);
//
// 	/// @}
// } // namespace glm
//
// #include "QuaternionMath.inl"
//
// #endif // DF_QUATERNION_MATH