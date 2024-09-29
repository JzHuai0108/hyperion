// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     function/FUNCTION.h.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <Eigen/Dense>

#include <sym/pose2.h>

namespace sym {

/**
 * This function was autogenerated from a symbolic function. Do not modify by hand.
 *
 * Symbolic function: spline4_pose2_sensor_velocity
 *
 * Args:
 *     dt: Scalar
 *     lambdas: Matrix42
 *     x0: Pose2
 *     x1: Pose2
 *     x2: Pose2
 *     x3: Pose2
 *     x4: Pose2
 *     x_T_s: Pose2
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix31
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 3, 1> Spline4Pose2SensorVelocityGlobal(
    const Scalar dt, const Eigen::Matrix<Scalar, 4, 2>& lambdas, const sym::Pose2<Scalar>& x0,
    const sym::Pose2<Scalar>& x1, const sym::Pose2<Scalar>& x2, const sym::Pose2<Scalar>& x3,
    const sym::Pose2<Scalar>& x4, const sym::Pose2<Scalar>& x_T_s, const Scalar epsilon) {
  // Total ops: 97

  // Unused inputs
  (void)x_T_s;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _x0 = x0.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _x1 = x1.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _x2 = x2.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _x3 = x3.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _x4 = x4.Data();

  // Intermediate terms (14)
  const Scalar _tmp0 = Scalar(1.0) / (dt);
  const Scalar _tmp1 = _x2[0] * _x3[0] + _x2[1] * _x3[1];
  const Scalar _tmp2 = _x3[0] * _x4[0] + _x3[1] * _x4[1];
  const Scalar _tmp3 = _x1[0] * _x2[0] + _x1[1] * _x2[1];
  const Scalar _tmp4 = _x0[0] * _x1[0] + _x0[1] * _x1[1];
  const Scalar _tmp5 =
      lambdas(0, 1) *
          std::atan2(_x0[0] * _x1[1] - _x0[1] * _x1[0],
                     _tmp4 + epsilon * ((((_tmp4) > 0) - ((_tmp4) < 0)) + Scalar(0.5))) +
      lambdas(1, 1) *
          std::atan2(_x1[0] * _x2[1] - _x1[1] * _x2[0],
                     _tmp3 + epsilon * ((((_tmp3) > 0) - ((_tmp3) < 0)) + Scalar(0.5))) +
      lambdas(2, 1) *
          std::atan2(_x2[0] * _x3[1] - _x2[1] * _x3[0],
                     _tmp1 + epsilon * ((((_tmp1) > 0) - ((_tmp1) < 0)) + Scalar(0.5))) +
      lambdas(3, 1) * std::atan2(_x3[0] * _x4[1] - _x3[1] * _x4[0],
                                 _tmp2 + epsilon * ((((_tmp2) > 0) - ((_tmp2) < 0)) + Scalar(0.5)));
  const Scalar _tmp6 = -_x2[2] + _x3[2];
  const Scalar _tmp7 = -_x1[2] + _x2[2];
  const Scalar _tmp8 = -_x0[2] + _x1[2];
  const Scalar _tmp9 = -_x3[2] + _x4[2];
  const Scalar _tmp10 = -_x2[3] + _x3[3];
  const Scalar _tmp11 = -_x1[3] + _x2[3];
  const Scalar _tmp12 = -_x0[3] + _x1[3];
  const Scalar _tmp13 = -_x3[3] + _x4[3];

  // Output terms (1)
  Eigen::Matrix<Scalar, 3, 1> _res;

  _res(0, 0) = _tmp0 * _tmp5;
  _res(1, 0) = _tmp0 * (_tmp5 * (_tmp10 * lambdas(2, 0) + _tmp11 * lambdas(1, 0) +
                                 _tmp12 * lambdas(0, 0) + _tmp13 * lambdas(3, 0) + _x0[3]) +
                        _tmp6 * lambdas(2, 1) + _tmp7 * lambdas(1, 1) + _tmp8 * lambdas(0, 1) +
                        _tmp9 * lambdas(3, 1));
  _res(2, 0) = _tmp0 * (_tmp10 * lambdas(2, 1) + _tmp11 * lambdas(1, 1) + _tmp12 * lambdas(0, 1) +
                        _tmp13 * lambdas(3, 1) -
                        _tmp5 * (_tmp6 * lambdas(2, 0) + _tmp7 * lambdas(1, 0) +
                                 _tmp8 * lambdas(0, 0) + _tmp9 * lambdas(3, 0) + _x0[2]));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
