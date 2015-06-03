/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datapipeline/model/Field.h>
#include <aws/datapipeline/model/Tag.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DataPipeline
{
namespace Model
{
  /*
    <p>Contains pipeline metadata.</p>
  */
  class AWS_DATAPIPELINE_API PipelineDescription
  {
  public:
    PipelineDescription();
    PipelineDescription(const Aws::Utils::Json::JsonValue& jsonValue);
    PipelineDescription& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /*
     <p>The pipeline identifier that was assigned by AWS Data Pipeline. This is a string of the form <code>df-297EG78HU43EEXAMPLE</code>.</p>
    */
    inline const Aws::String& GetPipelineId() const{ return m_pipelineId; }
    /*
     <p>The pipeline identifier that was assigned by AWS Data Pipeline. This is a string of the form <code>df-297EG78HU43EEXAMPLE</code>.</p>
    */
    inline void SetPipelineId(const Aws::String& value) { m_pipelineId = value; }

    /*
     <p>The pipeline identifier that was assigned by AWS Data Pipeline. This is a string of the form <code>df-297EG78HU43EEXAMPLE</code>.</p>
    */
    inline void SetPipelineId(const char* value) { m_pipelineId.assign(value); }

    /*
     <p>The pipeline identifier that was assigned by AWS Data Pipeline. This is a string of the form <code>df-297EG78HU43EEXAMPLE</code>.</p>
    */
    inline PipelineDescription&  WithPipelineId(const Aws::String& value) { SetPipelineId(value); return *this;}

    /*
     <p>The pipeline identifier that was assigned by AWS Data Pipeline. This is a string of the form <code>df-297EG78HU43EEXAMPLE</code>.</p>
    */
    inline PipelineDescription& WithPipelineId(const char* value) { SetPipelineId(value); return *this;}

    /*
     <p>The name of the pipeline.</p>
    */
    inline const Aws::String& GetName() const{ return m_name; }
    /*
     <p>The name of the pipeline.</p>
    */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /*
     <p>The name of the pipeline.</p>
    */
    inline void SetName(const char* value) { m_name.assign(value); }

    /*
     <p>The name of the pipeline.</p>
    */
    inline PipelineDescription&  WithName(const Aws::String& value) { SetName(value); return *this;}

    /*
     <p>The name of the pipeline.</p>
    */
    inline PipelineDescription& WithName(const char* value) { SetName(value); return *this;}

    /*
     <p>A list of read-only fields that contain metadata about the pipeline: @userId, @accountId, and @pipelineState.</p>
    */
    inline const Aws::Vector<Field>& GetFields() const{ return m_fields; }
    /*
     <p>A list of read-only fields that contain metadata about the pipeline: @userId, @accountId, and @pipelineState.</p>
    */
    inline void SetFields(const Aws::Vector<Field>& value) { m_fields = value; }

    /*
     <p>A list of read-only fields that contain metadata about the pipeline: @userId, @accountId, and @pipelineState.</p>
    */
    inline PipelineDescription&  WithFields(const Aws::Vector<Field>& value) { SetFields(value); return *this;}

    /*
     <p>A list of read-only fields that contain metadata about the pipeline: @userId, @accountId, and @pipelineState.</p>
    */
    inline PipelineDescription& AddFields(const Field& value) { m_fields.push_back(value); return *this; }

    /*
     <p>Description of the pipeline.</p>
    */
    inline const Aws::String& GetDescription() const{ return m_description; }
    /*
     <p>Description of the pipeline.</p>
    */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /*
     <p>Description of the pipeline.</p>
    */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /*
     <p>Description of the pipeline.</p>
    */
    inline PipelineDescription&  WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /*
     <p>Description of the pipeline.</p>
    */
    inline PipelineDescription& WithDescription(const char* value) { SetDescription(value); return *this;}

    /*
     <p>A list of tags to associated with a pipeline. Tags let you control access to pipelines. For more information, see <a href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-control-access.html">Controlling User Access to Pipelines</a> in the <i>AWS Data Pipeline Developer Guide</i>.</p>
    */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    /*
     <p>A list of tags to associated with a pipeline. Tags let you control access to pipelines. For more information, see <a href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-control-access.html">Controlling User Access to Pipelines</a> in the <i>AWS Data Pipeline Developer Guide</i>.</p>
    */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /*
     <p>A list of tags to associated with a pipeline. Tags let you control access to pipelines. For more information, see <a href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-control-access.html">Controlling User Access to Pipelines</a> in the <i>AWS Data Pipeline Developer Guide</i>.</p>
    */
    inline PipelineDescription&  WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /*
     <p>A list of tags to associated with a pipeline. Tags let you control access to pipelines. For more information, see <a href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-control-access.html">Controlling User Access to Pipelines</a> in the <i>AWS Data Pipeline Developer Guide</i>.</p>
    */
    inline PipelineDescription& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

  private:
    Aws::String m_pipelineId;
    Aws::String m_name;
    Aws::Vector<Field> m_fields;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws