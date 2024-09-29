/// This file is subject to the terms and conditions defined in
/// the 'LICENSE' file, which is part of this repository.

#pragma once

#include "hyperion/ceres/cost_functions/sym/pose2_between_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/pose2_between_factor_with_jacobians02.hpp"
#include "hyperion/ceres/cost_functions/sym/pose2_delta_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/pose2_delta_factor_with_jacobian0.hpp"
#include "hyperion/ceres/cost_functions/sym/pose2_delta_factor_with_jacobians01.hpp"
#include "hyperion/ceres/cost_functions/sym/pose2_r2_sensor_between_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/pose2_r2_sensor_between_factor_with_jacobians013.hpp"
#include "hyperion/ceres/cost_functions/sym/pose2_r2_sensor_delta_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/pose2_r2_sensor_delta_factor_with_jacobians01.hpp"
#include "hyperion/ceres/cost_functions/sym/pose2_r2_sensor_relative_between_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/pose2_r2_sensor_relative_between_factor_with_jacobians0134.hpp"
#include "hyperion/ceres/cost_functions/sym/pose2_rot2_sensor_between_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/pose2_rot2_sensor_between_factor_with_jacobians013.hpp"
#include "hyperion/ceres/cost_functions/sym/pose2_rot2_sensor_delta_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/pose2_rot2_sensor_delta_factor_with_jacobians01.hpp"
#include "hyperion/ceres/cost_functions/sym/pose2_rot2_sensor_relative_between_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/pose2_rot2_sensor_relative_between_factor_with_jacobians0134.hpp"
#include "hyperion/ceres/cost_functions/sym/pose2_sensor_angle_between_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/pose2_sensor_angle_between_factor_with_jacobians013.hpp"
#include "hyperion/ceres/cost_functions/sym/pose2_sensor_between_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/pose2_sensor_between_factor_with_jacobians013.hpp"
#include "hyperion/ceres/cost_functions/sym/pose2_sensor_delta_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/pose2_sensor_delta_factor_with_jacobians01.hpp"
#include "hyperion/ceres/cost_functions/sym/pose2_sensor_euclidean_distance_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/pose2_sensor_euclidean_distance_factor_with_jacobians013.hpp"
#include "hyperion/ceres/cost_functions/sym/pose2_sensor_relative_angle_between_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/pose2_sensor_relative_angle_between_factor_with_jacobians0134.hpp"
#include "hyperion/ceres/cost_functions/sym/pose2_sensor_relative_between_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/pose2_sensor_relative_between_factor_with_jacobians0134.hpp"
#include "hyperion/ceres/cost_functions/sym/pose2_sensor_relative_euclidean_distance_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/pose2_sensor_relative_euclidean_distance_factor_with_jacobians0134.hpp"
#include "hyperion/ceres/cost_functions/sym/pose3_between_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/pose3_between_factor_with_jacobians02.hpp"
#include "hyperion/ceres/cost_functions/sym/pose3_camera_linear_bearing_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/pose3_camera_linear_bearing_factor_with_jacobians0123.hpp"
#include "hyperion/ceres/cost_functions/sym/pose3_camera_linear_bearing_factor_with_jacobians013.hpp"
#include "hyperion/ceres/cost_functions/sym/pose3_camera_linear_bearing_factor_with_jacobians023.hpp"
#include "hyperion/ceres/cost_functions/sym/pose3_camera_linear_bearing_factor_with_jacobians03.hpp"
#include "hyperion/ceres/cost_functions/sym/pose3_camera_linear_reprojection_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/pose3_camera_linear_reprojection_factor_with_jacobians0123.hpp"
#include "hyperion/ceres/cost_functions/sym/pose3_camera_linear_reprojection_factor_with_jacobians013.hpp"
#include "hyperion/ceres/cost_functions/sym/pose3_camera_linear_reprojection_factor_with_jacobians023.hpp"
#include "hyperion/ceres/cost_functions/sym/pose3_camera_linear_reprojection_factor_with_jacobians03.hpp"
#include "hyperion/ceres/cost_functions/sym/pose3_delta_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/pose3_delta_factor_with_jacobian0.hpp"
#include "hyperion/ceres/cost_functions/sym/pose3_delta_factor_with_jacobians01.hpp"
#include "hyperion/ceres/cost_functions/sym/pose3_r3_sensor_between_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/pose3_r3_sensor_between_factor_with_jacobians013.hpp"
#include "hyperion/ceres/cost_functions/sym/pose3_r3_sensor_delta_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/pose3_r3_sensor_delta_factor_with_jacobians01.hpp"
#include "hyperion/ceres/cost_functions/sym/pose3_r3_sensor_relative_between_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/pose3_r3_sensor_relative_between_factor_with_jacobians0134.hpp"
#include "hyperion/ceres/cost_functions/sym/pose3_rot3_sensor_between_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/pose3_rot3_sensor_between_factor_with_jacobians013.hpp"
#include "hyperion/ceres/cost_functions/sym/pose3_rot3_sensor_delta_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/pose3_rot3_sensor_delta_factor_with_jacobians01.hpp"
#include "hyperion/ceres/cost_functions/sym/pose3_rot3_sensor_relative_between_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/pose3_rot3_sensor_relative_between_factor_with_jacobians0134.hpp"
#include "hyperion/ceres/cost_functions/sym/pose3_sensor_angle_between_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/pose3_sensor_angle_between_factor_with_jacobians013.hpp"
#include "hyperion/ceres/cost_functions/sym/pose3_sensor_between_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/pose3_sensor_between_factor_with_jacobians013.hpp"
#include "hyperion/ceres/cost_functions/sym/pose3_sensor_delta_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/pose3_sensor_delta_factor_with_jacobians01.hpp"
#include "hyperion/ceres/cost_functions/sym/pose3_sensor_euclidean_distance_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/pose3_sensor_euclidean_distance_factor_with_jacobians013.hpp"
#include "hyperion/ceres/cost_functions/sym/pose3_sensor_relative_angle_between_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/pose3_sensor_relative_angle_between_factor_with_jacobians0134.hpp"
#include "hyperion/ceres/cost_functions/sym/pose3_sensor_relative_between_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/pose3_sensor_relative_between_factor_with_jacobians0134.hpp"
#include "hyperion/ceres/cost_functions/sym/pose3_sensor_relative_euclidean_distance_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/pose3_sensor_relative_euclidean_distance_factor_with_jacobians0134.hpp"
#include "hyperion/ceres/cost_functions/sym/r1_between_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/r1_between_factor_with_jacobians02.hpp"
#include "hyperion/ceres/cost_functions/sym/r1_delta_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/r1_delta_factor_with_jacobian0.hpp"
#include "hyperion/ceres/cost_functions/sym/r1_delta_factor_with_jacobians01.hpp"
#include "hyperion/ceres/cost_functions/sym/r1_euclidean_distance_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/r1_euclidean_distance_factor_with_jacobians02.hpp"
#include "hyperion/ceres/cost_functions/sym/r2_angular_delta_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/r2_angular_delta_factor_with_jacobian0.hpp"
#include "hyperion/ceres/cost_functions/sym/r2_angular_delta_factor_with_jacobians01.hpp"
#include "hyperion/ceres/cost_functions/sym/r2_angular_distance_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/r2_angular_distance_factor_with_jacobians02.hpp"
#include "hyperion/ceres/cost_functions/sym/r2_between_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/r2_between_factor_with_jacobians02.hpp"
#include "hyperion/ceres/cost_functions/sym/r2_delta_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/r2_delta_factor_with_jacobian0.hpp"
#include "hyperion/ceres/cost_functions/sym/r2_delta_factor_with_jacobians01.hpp"
#include "hyperion/ceres/cost_functions/sym/r2_euclidean_distance_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/r2_euclidean_distance_factor_with_jacobians02.hpp"
#include "hyperion/ceres/cost_functions/sym/r3_angular_delta_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/r3_angular_delta_factor_with_jacobian0.hpp"
#include "hyperion/ceres/cost_functions/sym/r3_angular_delta_factor_with_jacobians01.hpp"
#include "hyperion/ceres/cost_functions/sym/r3_angular_distance_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/r3_angular_distance_factor_with_jacobians02.hpp"
#include "hyperion/ceres/cost_functions/sym/r3_between_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/r3_between_factor_with_jacobians02.hpp"
#include "hyperion/ceres/cost_functions/sym/r3_delta_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/r3_delta_factor_with_jacobian0.hpp"
#include "hyperion/ceres/cost_functions/sym/r3_delta_factor_with_jacobians01.hpp"
#include "hyperion/ceres/cost_functions/sym/r3_euclidean_distance_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/r3_euclidean_distance_factor_with_jacobians02.hpp"
#include "hyperion/ceres/cost_functions/sym/rot2_angular_distance_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/rot2_angular_distance_factor_with_jacobians02.hpp"
#include "hyperion/ceres/cost_functions/sym/rot2_between_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/rot2_between_factor_with_jacobians02.hpp"
#include "hyperion/ceres/cost_functions/sym/rot2_delta_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/rot2_delta_factor_with_jacobian0.hpp"
#include "hyperion/ceres/cost_functions/sym/rot2_delta_factor_with_jacobians01.hpp"
#include "hyperion/ceres/cost_functions/sym/rot3_angular_distance_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/rot3_angular_distance_factor_with_jacobians02.hpp"
#include "hyperion/ceres/cost_functions/sym/rot3_between_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/rot3_between_factor_with_jacobians02.hpp"
#include "hyperion/ceres/cost_functions/sym/rot3_delta_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/rot3_delta_factor_with_jacobian0.hpp"
#include "hyperion/ceres/cost_functions/sym/rot3_delta_factor_with_jacobians01.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose2_acceleration_global_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose2_acceleration_global_factor_with_jacobians2345.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose2_acceleration_local_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose2_acceleration_local_factor_with_jacobians2345.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose2_delta_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose2_delta_factor_with_jacobians1234.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose2_r2_delta_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose2_r2_delta_factor_with_jacobians1234.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose2_r2_sensor_between_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose2_r2_sensor_between_factor_with_jacobians123457.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose2_r2_sensor_delta_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose2_r2_sensor_delta_factor_with_jacobians12345.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose2_r2_sensor_relative_between_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose2_r2_sensor_relative_between_factor_with_jacobians1234589101112.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose2_rot2_delta_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose2_rot2_delta_factor_with_jacobians1234.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose2_rot2_sensor_between_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose2_rot2_sensor_between_factor_with_jacobians123457.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose2_rot2_sensor_delta_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose2_rot2_sensor_delta_factor_with_jacobians12345.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose2_rot2_sensor_relative_between_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose2_rot2_sensor_relative_between_factor_with_jacobians1234589101112.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose2_sensor_acceleration_global_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose2_sensor_acceleration_global_factor_with_jacobians23456.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose2_sensor_acceleration_local_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose2_sensor_acceleration_local_factor_with_jacobians23456.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose2_sensor_between_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose2_sensor_between_factor_with_jacobians123457.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose2_sensor_delta_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose2_sensor_delta_factor_with_jacobians12345.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose2_sensor_relative_between_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose2_sensor_relative_between_factor_with_jacobians1234589101112.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose2_sensor_velocity_global_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose2_sensor_velocity_global_factor_with_jacobians23456.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose2_sensor_velocity_local_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose2_sensor_velocity_local_factor_with_jacobians23456.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose2_velocity_global_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose2_velocity_global_factor_with_jacobians2345.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose2_velocity_local_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose2_velocity_local_factor_with_jacobians2345.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose3_acceleration_global_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose3_acceleration_global_factor_with_jacobians2345.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose3_acceleration_local_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose3_acceleration_local_factor_with_jacobians2345.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose3_camera_linear_bearing_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose3_camera_linear_bearing_factor_with_jacobians1234567.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose3_camera_linear_bearing_factor_with_jacobians123457.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose3_camera_linear_bearing_factor_with_jacobians123467.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose3_camera_linear_bearing_factor_with_jacobians12347.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose3_camera_linear_reprojection_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose3_camera_linear_reprojection_factor_with_jacobians1234567.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose3_camera_linear_reprojection_factor_with_jacobians123457.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose3_camera_linear_reprojection_factor_with_jacobians123467.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose3_camera_linear_reprojection_factor_with_jacobians12347.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose3_delta_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose3_delta_factor_with_jacobians1234.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose3_r3_delta_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose3_r3_delta_factor_with_jacobians1234.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose3_r3_sensor_between_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose3_r3_sensor_between_factor_with_jacobians123457.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose3_r3_sensor_delta_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose3_r3_sensor_delta_factor_with_jacobians12345.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose3_r3_sensor_relative_between_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose3_r3_sensor_relative_between_factor_with_jacobians1234589101112.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose3_rot3_delta_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose3_rot3_delta_factor_with_jacobians1234.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose3_rot3_sensor_between_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose3_rot3_sensor_between_factor_with_jacobians123457.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose3_rot3_sensor_delta_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose3_rot3_sensor_delta_factor_with_jacobians12345.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose3_rot3_sensor_relative_between_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose3_rot3_sensor_relative_between_factor_with_jacobians1234589101112.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose3_sensor_acceleration_global_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose3_sensor_acceleration_global_factor_with_jacobians23456.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose3_sensor_acceleration_local_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose3_sensor_acceleration_local_factor_with_jacobians23456.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose3_sensor_between_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose3_sensor_between_factor_with_jacobians123457.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose3_sensor_delta_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose3_sensor_delta_factor_with_jacobians12345.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose3_sensor_relative_between_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose3_sensor_relative_between_factor_with_jacobians1234589101112.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose3_sensor_velocity_global_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose3_sensor_velocity_global_factor_with_jacobians23456.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose3_sensor_velocity_local_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose3_sensor_velocity_local_factor_with_jacobians23456.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose3_velocity_global_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose3_velocity_global_factor_with_jacobians2345.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose3_velocity_local_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_pose3_velocity_local_factor_with_jacobians2345.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_r3_acceleration_global_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_r3_acceleration_global_factor_with_jacobians2345.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_r3_acceleration_local_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_r3_acceleration_local_factor_with_jacobians2345.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_r3_delta_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_r3_delta_factor_with_jacobians1234.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_r3_velocity_global_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_r3_velocity_global_factor_with_jacobians2345.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_r3_velocity_local_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_r3_velocity_local_factor_with_jacobians2345.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_rot2_acceleration_global_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_rot2_acceleration_global_factor_with_jacobians2345.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_rot2_acceleration_local_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_rot2_acceleration_local_factor_with_jacobians2345.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_rot2_delta_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_rot2_delta_factor_with_jacobians1234.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_rot2_velocity_global_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_rot2_velocity_global_factor_with_jacobians2345.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_rot2_velocity_local_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_rot2_velocity_local_factor_with_jacobians2345.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_rot3_acceleration_global_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_rot3_acceleration_global_factor_with_jacobians2345.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_rot3_acceleration_local_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_rot3_acceleration_local_factor_with_jacobians2345.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_rot3_delta_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_rot3_delta_factor_with_jacobians1234.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_rot3_velocity_global_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_rot3_velocity_global_factor_with_jacobians2345.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_rot3_velocity_local_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline3_rot3_velocity_local_factor_with_jacobians2345.hpp"
#include "hyperion/ceres/cost_functions/sym/spline4_pose3_acceleration_global_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline4_pose3_acceleration_global_factor_with_jacobians23456.hpp"
#include "hyperion/ceres/cost_functions/sym/spline4_pose3_acceleration_local_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline4_pose3_acceleration_local_factor_with_jacobians23456.hpp"
#include "hyperion/ceres/cost_functions/sym/spline4_pose3_delta_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline4_pose3_delta_factor_with_jacobians12345.hpp"
#include "hyperion/ceres/cost_functions/sym/spline4_pose3_velocity_global_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline4_pose3_velocity_global_factor_with_jacobians23456.hpp"
#include "hyperion/ceres/cost_functions/sym/spline4_pose3_velocity_local_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline4_pose3_velocity_local_factor_with_jacobians23456.hpp"
#include "hyperion/ceres/cost_functions/sym/spline4_rot3_acceleration_global_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline4_rot3_acceleration_global_factor_with_jacobians23456.hpp"
#include "hyperion/ceres/cost_functions/sym/spline4_rot3_acceleration_local_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline4_rot3_acceleration_local_factor_with_jacobians23456.hpp"
#include "hyperion/ceres/cost_functions/sym/spline4_rot3_delta_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline4_rot3_delta_factor_with_jacobians12345.hpp"
#include "hyperion/ceres/cost_functions/sym/spline4_rot3_velocity_global_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline4_rot3_velocity_global_factor_with_jacobians23456.hpp"
#include "hyperion/ceres/cost_functions/sym/spline4_rot3_velocity_local_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline4_rot3_velocity_local_factor_with_jacobians23456.hpp"
#include "hyperion/ceres/cost_functions/sym/spline5_pose3_acceleration_global_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline5_pose3_acceleration_global_factor_with_jacobians234567.hpp"
#include "hyperion/ceres/cost_functions/sym/spline5_pose3_acceleration_local_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline5_pose3_acceleration_local_factor_with_jacobians234567.hpp"
#include "hyperion/ceres/cost_functions/sym/spline5_pose3_delta_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline5_pose3_delta_factor_with_jacobians123456.hpp"
#include "hyperion/ceres/cost_functions/sym/spline5_pose3_velocity_global_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline5_pose3_velocity_global_factor_with_jacobians234567.hpp"
#include "hyperion/ceres/cost_functions/sym/spline5_pose3_velocity_local_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline5_pose3_velocity_local_factor_with_jacobians234567.hpp"
#include "hyperion/ceres/cost_functions/sym/spline5_rot3_acceleration_global_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline5_rot3_acceleration_global_factor_with_jacobians234567.hpp"
#include "hyperion/ceres/cost_functions/sym/spline5_rot3_acceleration_local_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline5_rot3_acceleration_local_factor_with_jacobians234567.hpp"
#include "hyperion/ceres/cost_functions/sym/spline5_rot3_delta_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline5_rot3_delta_factor_with_jacobians123456.hpp"
#include "hyperion/ceres/cost_functions/sym/spline5_rot3_velocity_global_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline5_rot3_velocity_global_factor_with_jacobians234567.hpp"
#include "hyperion/ceres/cost_functions/sym/spline5_rot3_velocity_local_factor.hpp"
#include "hyperion/ceres/cost_functions/sym/spline5_rot3_velocity_local_factor_with_jacobians234567.hpp"
