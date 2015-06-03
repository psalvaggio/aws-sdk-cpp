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
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudFront
{
namespace Model
{

  /*
    The request to get a distribution's information.
  */
  class AWS_CLOUDFRONT_API GetDistribution2014_11_06Request : public CloudFrontRequest
  {
  public:
    GetDistribution2014_11_06Request();
    Aws::String SerializePayload() const override;


    /*
     The distribution's id.
    */
    inline const Aws::String& GetId() const{ return m_id; }
    /*
     The distribution's id.
    */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /*
     The distribution's id.
    */
    inline void SetId(const char* value) { m_id.assign(value); }

    /*
     The distribution's id.
    */
    inline GetDistribution2014_11_06Request&  WithId(const Aws::String& value) { SetId(value); return *this;}

    /*
     The distribution's id.
    */
    inline GetDistribution2014_11_06Request& WithId(const char* value) { SetId(value); return *this;}

  private:
    Aws::String m_id;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws