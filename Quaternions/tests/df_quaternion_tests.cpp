#include "../Quaternion.hpp"
#include "gtc/epsilon.hpp"
#include "gtc/quaternion.hpp"

int compareDFtoGLM(const df::quat& q1, const glm::quat& q2, const float& epsilon = 1e-6f)
{
    int error(0);

    error += glm::epsilonEqual(q1.x, q2.x, epsilon);
    error += glm::epsilonEqual(q1.y, q2.y, epsilon);
    error += glm::epsilonEqual(q1.z, q2.z, epsilon);
    error += glm::epsilonEqual(q1.w, q2.w, epsilon);

    return error;
}

int compareDFtoDF(const df::quat& q1, const df::quat& q2, const float& epsilon = 1e-6f)
{
    int error(0);

    error += glm::epsilonEqual(q1.x, q2.x, epsilon);
    error += glm::epsilonEqual(q1.y, q2.y, epsilon);
    error += glm::epsilonEqual(q1.z, q2.z, epsilon);
    error += glm::epsilonEqual(q1.w, q2.w, epsilon);

    return error;
}

int test_quat_ctor()
{
    int error(0);
    
    return error;
}

int test_quat_oper()
{
    int error(0);

    {
        df::quat q = df::quat(1.f, 0.5f, 0.5f, 0.5f);
        df::quat sln = df::quat(-1.f, -0.5f, -0.5f, -0.5f);
        error += compareDFtoDF(-q, sln);
    }
    
    return error;
}

int main()
{
    int error(0);

    error += test_quat_ctor();
    error += test_quat_oper();

    return error;
}