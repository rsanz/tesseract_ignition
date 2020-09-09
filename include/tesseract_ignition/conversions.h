/**
 * @file conversions.h
 * @brief A set of conversion between Tesseract and Ignition Robotics objects
 *
 * @author Levi Armstrong
 * @date May 14, 2020
 * @version TODO
 * @bug No known bugs
 *
 * @copyright Copyright (c) 2020, Southwest Research Institute
 *
 * @par License
 * Software License Agreement (Apache License)
 * @par
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * http://www.apache.org/licenses/LICENSE-2.0
 * @par
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef TESSERACT_IGNITION_CONVERSIONS_H
#define TESSERACT_IGNITION_CONVERSIONS_H

#include <ignition/rendering/Scene.hh>

#include <tesseract_scene_graph/graph.h>
#include <tesseract_common/types.h>
#include <tesseract_visualization/ignition/entity_manager.h>

namespace tesseract_ignition
{

bool toScene(ignition::rendering::Scene& scene,
             tesseract_visualization::EntityManager& entity_manager,
             const tesseract_scene_graph::SceneGraph& scene_graph,
             const tesseract_common::TransformMap& link_transforms);

}

#endif // TESSERACT_IGNITION_CONVERSIONS_H
