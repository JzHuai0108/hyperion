// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     COST_FUNCTION.hpp.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <ceres/sized_cost_function.h>

#include <sym/pose3.h>

namespace hyperion::ceres {

class Spline4Pose3VelocityLocalCostFunction final
    : public ::ceres::SizedCostFunction<6, 7, 7, 7, 7, 7> {
 public:
  /// Constructor.
  explicit Spline4Pose3VelocityLocalCostFunction(const double dt,
                                                 const Eigen::Matrix<double, 4, 2>& lambdas,
                                                 const Eigen::Matrix<double, 6, 1>& velocity,
                                                 const Eigen::Matrix<double, 6, 6>& sqrtInfo)
      : dt_{dt}, lambdas_{lambdas}, velocity_{velocity}, sqrt_info_{sqrtInfo} {}

  /// dt accessor.
  [[nodiscard]] auto dt() const -> const double& {
    return dt_;
  }

  /// dt modifier.
  auto dt() -> double& {
    return dt_;
  }

  /// lambdas accessor.
  [[nodiscard]] auto lambdas() const -> const Eigen::Matrix<double, 4, 2>& {
    return lambdas_;
  }

  /// lambdas modifier.
  auto lambdas() -> Eigen::Matrix<double, 4, 2>& {
    return lambdas_;
  }

  /// velocity accessor.
  [[nodiscard]] auto velocity() const -> const Eigen::Matrix<double, 6, 1>& {
    return velocity_;
  }

  /// velocity modifier.
  auto velocity() -> Eigen::Matrix<double, 6, 1>& {
    return velocity_;
  }

  /// sqrtInfo accessor.
  [[nodiscard]] auto sqrtInfo() const -> const Eigen::Matrix<double, 6, 6>& {
    return sqrt_info_;
  }

  /// sqrtInfo modifier.
  auto sqrtInfo() -> Eigen::Matrix<double, 6, 6>& {
    return sqrt_info_;
  }

  /// See documentation of base class.
  /// @note Returns (tangent_dim x ambient_dim) Jacobians stored in row-major order.
  auto Evaluate(double const* const* parameters, double* residuals, double** jacobians) const
      -> bool override;

 private:
  double dt_;
  Eigen::Matrix<double, 4, 2> lambdas_;
  Eigen::Matrix<double, 6, 1> velocity_;
  Eigen::Matrix<double, 6, 6> sqrt_info_;
};

}  // namespace hyperion::ceres
