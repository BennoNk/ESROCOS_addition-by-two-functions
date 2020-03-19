#ifdef __unix__
#include <stdio.h>
#endif
#include "PrintTypes.h"

#ifdef __linux__
#include <pthread.h>

static pthread_mutex_t g_printing_mutex = PTHREAD_MUTEX_INITIALIZER;

#endif

void PrintWrappers_Matrix6d(const char *paramName, const asn1SccWrappers_Matrix6d *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    {
        int i1;
        for(i1=0; i1<(*pData).data.nCount; i1++) {
            printf("%s::data::Elem %f\n", paramName, (*pData).data.arr[i1]);
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintT_UInt64(const char *paramName, const asn1SccT_UInt64 *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    #if WORD_SIZE==8
    printf("%s %lld\n", paramName, (*pData));
    #else
    printf("%s %d\n", paramName, (*pData));
    #endif
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_samples_Wrench(const char *paramName, const asn1SccBase_samples_Wrench *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    {
        int i2;
        for(i2=0; i2<(*pData).force.data.nCount; i2++) {
            printf("%s::force::data::Elem %f\n", paramName, (*pData).force.data.arr[i2]);
        }
    }
    {
        int i3;
        for(i3=0; i3<(*pData).torque.data.nCount; i3++) {
            printf("%s::torque::data::Elem %f\n", paramName, (*pData).torque.data.arr[i3]);
        }
    }
    #if WORD_SIZE==8
    printf("%s::time::microseconds %lld\n", paramName, (*pData).time.microseconds);
    #else
    printf("%s::time::microseconds %d\n", paramName, (*pData).time.microseconds);
    #endif
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintGeometry_msgs_Point32(const char *paramName, const asn1SccGeometry_msgs_Point32 *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    printf("%s::x %f\n", paramName, (*pData).x);
    printf("%s::y %f\n", paramName, (*pData).y);
    printf("%s::z %f\n", paramName, (*pData).z);
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintT_UInt32(const char *paramName, const asn1SccT_UInt32 *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    #if WORD_SIZE==8
    printf("%s %lld\n", paramName, (*pData));
    #else
    printf("%s %d\n", paramName, (*pData));
    #endif
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_samples_RigidBodyState_m(const char *paramName, const asn1SccBase_samples_RigidBodyState_m *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    #if WORD_SIZE==8
    printf("%s::time::microseconds %lld\n", paramName, (*pData).time.microseconds);
    #else
    printf("%s::time::microseconds %d\n", paramName, (*pData).time.microseconds);
    #endif
    {
        int i;
        printf("%s::sourceframe ", paramName);
        for(i=0; i<(*pData).sourceframe.nCount; i++)
            printf("%c", (*pData).sourceframe.arr[i]);
        printf("\n");
    }

    {
        int i;
        printf("%s::targetframe ", paramName);
        for(i=0; i<(*pData).targetframe.nCount; i++)
            printf("%c", (*pData).targetframe.arr[i]);
        printf("\n");
    }

    {
        int i4;
        for(i4=0; i4<(*pData).position.data.nCount; i4++) {
            printf("%s::position::data::Elem %f\n", paramName, (*pData).position.data.arr[i4]);
        }
    }
    {
        int i5;
        for(i5=0; i5<(*pData).cov_position.data.nCount; i5++) {
            printf("%s::cov_position::data::Elem %f\n", paramName, (*pData).cov_position.data.arr[i5]);
        }
    }
    {
        int i6;
        for(i6=0; i6<(*pData).orientation.im.nCount; i6++) {
            printf("%s::orientation::im::Elem %f\n", paramName, (*pData).orientation.im.arr[i6]);
        }
    }
    printf("%s::orientation::re %f\n", paramName, (*pData).orientation.re);
    {
        int i7;
        for(i7=0; i7<(*pData).cov_orientation.data.nCount; i7++) {
            printf("%s::cov_orientation::data::Elem %f\n", paramName, (*pData).cov_orientation.data.arr[i7]);
        }
    }
    {
        int i8;
        for(i8=0; i8<(*pData).velocity.data.nCount; i8++) {
            printf("%s::velocity::data::Elem %f\n", paramName, (*pData).velocity.data.arr[i8]);
        }
    }
    {
        int i9;
        for(i9=0; i9<(*pData).cov_velocity.data.nCount; i9++) {
            printf("%s::cov_velocity::data::Elem %f\n", paramName, (*pData).cov_velocity.data.arr[i9]);
        }
    }
    {
        int i10;
        for(i10=0; i10<(*pData).angular_velocity.data.nCount; i10++) {
            printf("%s::angular_velocity::data::Elem %f\n", paramName, (*pData).angular_velocity.data.arr[i10]);
        }
    }
    {
        int i11;
        for(i11=0; i11<(*pData).cov_angular_velocity.data.nCount; i11++) {
            printf("%s::cov_angular_velocity::data::Elem %f\n", paramName, (*pData).cov_angular_velocity.data.arr[i11]);
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_samples_frame_FramePair(const char *paramName, const asn1SccBase_samples_frame_FramePair *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    #if WORD_SIZE==8
    printf("%s::time::microseconds %lld\n", paramName, (*pData).time.microseconds);
    #else
    printf("%s::time::microseconds %d\n", paramName, (*pData).time.microseconds);
    #endif
    #if WORD_SIZE==8
    printf("%s::first::time::microseconds %lld\n", paramName, (*pData).first.time.microseconds);
    #else
    printf("%s::first::time::microseconds %d\n", paramName, (*pData).first.time.microseconds);
    #endif
    #if WORD_SIZE==8
    printf("%s::first::received_time::microseconds %lld\n", paramName, (*pData).first.received_time.microseconds);
    #else
    printf("%s::first::received_time::microseconds %d\n", paramName, (*pData).first.received_time.microseconds);
    #endif
    {
        int i;
        printf("%s::first::image ", paramName);
        for(i=0; i<(*pData).first.image.nCount; i++)
            printf("%c", (*pData).first.image.arr[i]);
        printf("\n");
    }

    {
        int i12;
        for(i12=0; i12<(*pData).first.attributes.nCount; i12++) {
            {
                int i;
                printf("%s::first::attributes::Elem::data ", paramName);
                for(i=0; i<(*pData).first.attributes.arr[i12].data.nCount; i++)
                    printf("%c", (*pData).first.attributes.arr[i12].data.arr[i]);
                printf("\n");
            }

            {
                int i;
                printf("%s::first::attributes::Elem::name_val ", paramName);
                for(i=0; i<(*pData).first.attributes.arr[i12].name_val.nCount; i++)
                    printf("%c", (*pData).first.attributes.arr[i12].name_val.arr[i]);
                printf("\n");
            }

        }
    }
    #if WORD_SIZE==8
    printf("%s::first::size_val::width %lld\n", paramName, (*pData).first.size_val.width);
    #else
    printf("%s::first::size_val::width %d\n", paramName, (*pData).first.size_val.width);
    #endif
    #if WORD_SIZE==8
    printf("%s::first::size_val::height %lld\n", paramName, (*pData).first.size_val.height);
    #else
    printf("%s::first::size_val::height %d\n", paramName, (*pData).first.size_val.height);
    #endif
    #if WORD_SIZE==8
    printf("%s::first::data_depth %lld\n", paramName, (*pData).first.data_depth);
    #else
    printf("%s::first::data_depth %d\n", paramName, (*pData).first.data_depth);
    #endif
    #if WORD_SIZE==8
    printf("%s::first::pixel_size %lld\n", paramName, (*pData).first.pixel_size);
    #else
    printf("%s::first::pixel_size %d\n", paramName, (*pData).first.pixel_size);
    #endif
    #if WORD_SIZE==8
    printf("%s::first::row_size %lld\n", paramName, (*pData).first.row_size);
    #else
    printf("%s::first::row_size %d\n", paramName, (*pData).first.row_size);
    #endif
    printf("%s::first::frame_mode %d\n", paramName, (int)(*pData).first.frame_mode);
    printf("%s::first::frame_status %d\n", paramName, (int)(*pData).first.frame_status);
    #if WORD_SIZE==8
    printf("%s::second::time::microseconds %lld\n", paramName, (*pData).second.time.microseconds);
    #else
    printf("%s::second::time::microseconds %d\n", paramName, (*pData).second.time.microseconds);
    #endif
    #if WORD_SIZE==8
    printf("%s::second::received_time::microseconds %lld\n", paramName, (*pData).second.received_time.microseconds);
    #else
    printf("%s::second::received_time::microseconds %d\n", paramName, (*pData).second.received_time.microseconds);
    #endif
    {
        int i;
        printf("%s::second::image ", paramName);
        for(i=0; i<(*pData).second.image.nCount; i++)
            printf("%c", (*pData).second.image.arr[i]);
        printf("\n");
    }

    {
        int i13;
        for(i13=0; i13<(*pData).second.attributes.nCount; i13++) {
            {
                int i;
                printf("%s::second::attributes::Elem::data ", paramName);
                for(i=0; i<(*pData).second.attributes.arr[i13].data.nCount; i++)
                    printf("%c", (*pData).second.attributes.arr[i13].data.arr[i]);
                printf("\n");
            }

            {
                int i;
                printf("%s::second::attributes::Elem::name_val ", paramName);
                for(i=0; i<(*pData).second.attributes.arr[i13].name_val.nCount; i++)
                    printf("%c", (*pData).second.attributes.arr[i13].name_val.arr[i]);
                printf("\n");
            }

        }
    }
    #if WORD_SIZE==8
    printf("%s::second::size_val::width %lld\n", paramName, (*pData).second.size_val.width);
    #else
    printf("%s::second::size_val::width %d\n", paramName, (*pData).second.size_val.width);
    #endif
    #if WORD_SIZE==8
    printf("%s::second::size_val::height %lld\n", paramName, (*pData).second.size_val.height);
    #else
    printf("%s::second::size_val::height %d\n", paramName, (*pData).second.size_val.height);
    #endif
    #if WORD_SIZE==8
    printf("%s::second::data_depth %lld\n", paramName, (*pData).second.data_depth);
    #else
    printf("%s::second::data_depth %d\n", paramName, (*pData).second.data_depth);
    #endif
    #if WORD_SIZE==8
    printf("%s::second::pixel_size %lld\n", paramName, (*pData).second.pixel_size);
    #else
    printf("%s::second::pixel_size %d\n", paramName, (*pData).second.pixel_size);
    #endif
    #if WORD_SIZE==8
    printf("%s::second::row_size %lld\n", paramName, (*pData).second.row_size);
    #else
    printf("%s::second::row_size %d\n", paramName, (*pData).second.row_size);
    #endif
    printf("%s::second::frame_mode %d\n", paramName, (int)(*pData).second.frame_mode);
    printf("%s::second::frame_status %d\n", paramName, (int)(*pData).second.frame_status);
    #if WORD_SIZE==8
    printf("%s::id %lld\n", paramName, (*pData).id);
    #else
    printf("%s::id %d\n", paramName, (*pData).id);
    #endif
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_TransformWithCovariance_m(const char *paramName, const asn1SccBase_TransformWithCovariance_m *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    {
        int i14;
        for(i14=0; i14<(*pData).translation.data.nCount; i14++) {
            printf("%s::translation::data::Elem %f\n", paramName, (*pData).translation.data.arr[i14]);
        }
    }
    {
        int i15;
        for(i15=0; i15<(*pData).orientation.im.nCount; i15++) {
            printf("%s::orientation::im::Elem %f\n", paramName, (*pData).orientation.im.arr[i15]);
        }
    }
    printf("%s::orientation::re %f\n", paramName, (*pData).orientation.re);
    {
        int i16;
        for(i16=0; i16<(*pData).cov.data.nCount; i16++) {
            printf("%s::cov::data::Elem %f\n", paramName, (*pData).cov.data.arr[i16]);
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintWrappers_Vector2d(const char *paramName, const asn1SccWrappers_Vector2d *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    {
        int i17;
        for(i17=0; i17<(*pData).data.nCount; i17++) {
            printf("%s::data::Elem %f\n", paramName, (*pData).data.arr[i17]);
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_samples_SonarScan(const char *paramName, const asn1SccBase_samples_SonarScan *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    #if WORD_SIZE==8
    printf("%s::time::microseconds %lld\n", paramName, (*pData).time.microseconds);
    #else
    printf("%s::time::microseconds %d\n", paramName, (*pData).time.microseconds);
    #endif
    {
        int i;
        printf("%s::data ", paramName);
        for(i=0; i<(*pData).data.nCount; i++)
            printf("%c", (*pData).data.arr[i]);
        printf("\n");
    }

    {
        int i18;
        for(i18=0; i18<(*pData).time_beams.nCount; i18++) {
            #if WORD_SIZE==8
            printf("%s::time_beams::Elem::microseconds %lld\n", paramName, (*pData).time_beams.arr[i18].microseconds);
            #else
            printf("%s::time_beams::Elem::microseconds %d\n", paramName, (*pData).time_beams.arr[i18].microseconds);
            #endif
        }
    }
    #if WORD_SIZE==8
    printf("%s::number_of_beams %lld\n", paramName, (*pData).number_of_beams);
    #else
    printf("%s::number_of_beams %d\n", paramName, (*pData).number_of_beams);
    #endif
    #if WORD_SIZE==8
    printf("%s::number_of_bins %lld\n", paramName, (*pData).number_of_bins);
    #else
    printf("%s::number_of_bins %d\n", paramName, (*pData).number_of_bins);
    #endif
    printf("%s::start_bearing::rad %f\n", paramName, (*pData).start_bearing.rad);
    printf("%s::angular_resolution::rad %f\n", paramName, (*pData).angular_resolution.rad);
    printf("%s::sampling_interval %f\n", paramName, (*pData).sampling_interval);
    printf("%s::speed_of_sound %f\n", paramName, (*pData).speed_of_sound);
    printf("%s::beamwidth_horizontal::rad %f\n", paramName, (*pData).beamwidth_horizontal.rad);
    printf("%s::beamwidth_vertical::rad %f\n", paramName, (*pData).beamwidth_vertical.rad);
    printf("%s::memory_layout_column %d\n", paramName, (int)(*pData).memory_layout_column);
    printf("%s::polar_coordinates %d\n", paramName, (int)(*pData).polar_coordinates);
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_NamedVector_base_JointTransform_m(const char *paramName, const asn1SccBase_NamedVector_base_JointTransform_m *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    {
        int i19;
        for(i19=0; i19<(*pData).names.nCount; i19++) {
            {
                int i;
                printf("%s::names::Elem ", paramName);
                for(i=0; i<(*pData).names.arr[i19].nCount; i++)
                    printf("%c", (*pData).names.arr[i19].arr[i]);
                printf("\n");
            }

        }
    }
    {
        int i20;
        for(i20=0; i20<(*pData).elements.nCount; i20++) {
            {
                int i;
                printf("%s::elements::Elem::sourceframe ", paramName);
                for(i=0; i<(*pData).elements.arr[i20].sourceframe.nCount; i++)
                    printf("%c", (*pData).elements.arr[i20].sourceframe.arr[i]);
                printf("\n");
            }

            {
                int i;
                printf("%s::elements::Elem::targetframe ", paramName);
                for(i=0; i<(*pData).elements.arr[i20].targetframe.nCount; i++)
                    printf("%c", (*pData).elements.arr[i20].targetframe.arr[i]);
                printf("\n");
            }

            {
                int i21;
                for(i21=0; i21<(*pData).elements.arr[i20].rotationaxis.data.nCount; i21++) {
                    printf("%s::elements::Elem::rotationaxis::data::Elem %f\n", paramName, (*pData).elements.arr[i20].rotationaxis.data.arr[i21]);
                }
            }
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_samples_frame_Frame(const char *paramName, const asn1SccBase_samples_frame_Frame *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    #if WORD_SIZE==8
    printf("%s::time::microseconds %lld\n", paramName, (*pData).time.microseconds);
    #else
    printf("%s::time::microseconds %d\n", paramName, (*pData).time.microseconds);
    #endif
    #if WORD_SIZE==8
    printf("%s::received_time::microseconds %lld\n", paramName, (*pData).received_time.microseconds);
    #else
    printf("%s::received_time::microseconds %d\n", paramName, (*pData).received_time.microseconds);
    #endif
    {
        int i;
        printf("%s::image ", paramName);
        for(i=0; i<(*pData).image.nCount; i++)
            printf("%c", (*pData).image.arr[i]);
        printf("\n");
    }

    {
        int i22;
        for(i22=0; i22<(*pData).attributes.nCount; i22++) {
            {
                int i;
                printf("%s::attributes::Elem::data ", paramName);
                for(i=0; i<(*pData).attributes.arr[i22].data.nCount; i++)
                    printf("%c", (*pData).attributes.arr[i22].data.arr[i]);
                printf("\n");
            }

            {
                int i;
                printf("%s::attributes::Elem::name_val ", paramName);
                for(i=0; i<(*pData).attributes.arr[i22].name_val.nCount; i++)
                    printf("%c", (*pData).attributes.arr[i22].name_val.arr[i]);
                printf("\n");
            }

        }
    }
    #if WORD_SIZE==8
    printf("%s::size_val::width %lld\n", paramName, (*pData).size_val.width);
    #else
    printf("%s::size_val::width %d\n", paramName, (*pData).size_val.width);
    #endif
    #if WORD_SIZE==8
    printf("%s::size_val::height %lld\n", paramName, (*pData).size_val.height);
    #else
    printf("%s::size_val::height %d\n", paramName, (*pData).size_val.height);
    #endif
    #if WORD_SIZE==8
    printf("%s::data_depth %lld\n", paramName, (*pData).data_depth);
    #else
    printf("%s::data_depth %d\n", paramName, (*pData).data_depth);
    #endif
    #if WORD_SIZE==8
    printf("%s::pixel_size %lld\n", paramName, (*pData).pixel_size);
    #else
    printf("%s::pixel_size %d\n", paramName, (*pData).pixel_size);
    #endif
    #if WORD_SIZE==8
    printf("%s::row_size %lld\n", paramName, (*pData).row_size);
    #else
    printf("%s::row_size %d\n", paramName, (*pData).row_size);
    #endif
    printf("%s::frame_mode %d\n", paramName, (int)(*pData).frame_mode);
    printf("%s::frame_status %d\n", paramName, (int)(*pData).frame_status);
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintGeometry_msgs_Point(const char *paramName, const asn1SccGeometry_msgs_Point *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    printf("%s::x %f\n", paramName, (*pData).x);
    printf("%s::y %f\n", paramName, (*pData).y);
    printf("%s::z %f\n", paramName, (*pData).z);
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintT_UInt16(const char *paramName, const asn1SccT_UInt16 *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    #if WORD_SIZE==8
    printf("%s %lld\n", paramName, (*pData));
    #else
    printf("%s %d\n", paramName, (*pData));
    #endif
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintT_Int32(const char *paramName, const asn1SccT_Int32 *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    #if WORD_SIZE==8
    printf("%s %lld\n", paramName, (*pData));
    #else
    printf("%s %d\n", paramName, (*pData));
    #endif
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_JointLimits(const char *paramName, const asn1SccBase_JointLimits *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    {
        int i23;
        for(i23=0; i23<(*pData).names.nCount; i23++) {
            {
                int i;
                printf("%s::names::Elem ", paramName);
                for(i=0; i<(*pData).names.arr[i23].nCount; i++)
                    printf("%c", (*pData).names.arr[i23].arr[i]);
                printf("\n");
            }

        }
    }
    {
        int i24;
        for(i24=0; i24<(*pData).elements.nCount; i24++) {
            printf("%s::elements::Elem::min::position %f\n", paramName, (*pData).elements.arr[i24].min.position);
            printf("%s::elements::Elem::min::speed %f\n", paramName, (*pData).elements.arr[i24].min.speed);
            printf("%s::elements::Elem::min::effort %f\n", paramName, (*pData).elements.arr[i24].min.effort);
            printf("%s::elements::Elem::min::raw %f\n", paramName, (*pData).elements.arr[i24].min.raw);
            printf("%s::elements::Elem::min::acceleration %f\n", paramName, (*pData).elements.arr[i24].min.acceleration);
            printf("%s::elements::Elem::max::position %f\n", paramName, (*pData).elements.arr[i24].max.position);
            printf("%s::elements::Elem::max::speed %f\n", paramName, (*pData).elements.arr[i24].max.speed);
            printf("%s::elements::Elem::max::effort %f\n", paramName, (*pData).elements.arr[i24].max.effort);
            printf("%s::elements::Elem::max::raw %f\n", paramName, (*pData).elements.arr[i24].max.raw);
            printf("%s::elements::Elem::max::acceleration %f\n", paramName, (*pData).elements.arr[i24].max.acceleration);
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_samples_Pointcloud(const char *paramName, const asn1SccBase_samples_Pointcloud *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    #if WORD_SIZE==8
    printf("%s::time::microseconds %lld\n", paramName, (*pData).time.microseconds);
    #else
    printf("%s::time::microseconds %d\n", paramName, (*pData).time.microseconds);
    #endif
    {
        int i25;
        for(i25=0; i25<(*pData).points.nCount; i25++) {
            {
                int i26;
                for(i26=0; i26<(*pData).points.arr[i25].data.nCount; i26++) {
                    printf("%s::points::Elem::data::Elem %f\n", paramName, (*pData).points.arr[i25].data.arr[i26]);
                }
            }
        }
    }
    {
        int i27;
        for(i27=0; i27<(*pData).colors.nCount; i27++) {
            {
                int i28;
                for(i28=0; i28<(*pData).colors.arr[i27].data.nCount; i28++) {
                    printf("%s::colors::Elem::data::Elem %f\n", paramName, (*pData).colors.arr[i27].data.arr[i28]);
                }
            }
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintT_UInt8(const char *paramName, const asn1SccT_UInt8 *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    #if WORD_SIZE==8
    printf("%s %lld\n", paramName, (*pData));
    #else
    printf("%s %d\n", paramName, (*pData));
    #endif
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_samples_frame_frame_size_t(const char *paramName, const asn1SccBase_samples_frame_frame_size_t *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    #if WORD_SIZE==8
    printf("%s::width %lld\n", paramName, (*pData).width);
    #else
    printf("%s::width %d\n", paramName, (*pData).width);
    #endif
    #if WORD_SIZE==8
    printf("%s::height %lld\n", paramName, (*pData).height);
    #else
    printf("%s::height %d\n", paramName, (*pData).height);
    #endif
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_Pose2D_m(const char *paramName, const asn1SccBase_Pose2D_m *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    {
        int i29;
        for(i29=0; i29<(*pData).position.data.nCount; i29++) {
            printf("%s::position::data::Elem %f\n", paramName, (*pData).position.data.arr[i29]);
        }
    }
    printf("%s::orientation %f\n", paramName, (*pData).orientation);
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_commands_Joints(const char *paramName, const asn1SccBase_commands_Joints *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    {
        int i30;
        for(i30=0; i30<(*pData).names.nCount; i30++) {
            {
                int i;
                printf("%s::names::Elem ", paramName);
                for(i=0; i<(*pData).names.arr[i30].nCount; i++)
                    printf("%c", (*pData).names.arr[i30].arr[i]);
                printf("\n");
            }

        }
    }
    {
        int i31;
        for(i31=0; i31<(*pData).elements.nCount; i31++) {
            printf("%s::elements::Elem::position %f\n", paramName, (*pData).elements.arr[i31].position);
            printf("%s::elements::Elem::speed %f\n", paramName, (*pData).elements.arr[i31].speed);
            printf("%s::elements::Elem::effort %f\n", paramName, (*pData).elements.arr[i31].effort);
            printf("%s::elements::Elem::raw %f\n", paramName, (*pData).elements.arr[i31].raw);
            printf("%s::elements::Elem::acceleration %f\n", paramName, (*pData).elements.arr[i31].acceleration);
        }
    }
    #if WORD_SIZE==8
    printf("%s::time::microseconds %lld\n", paramName, (*pData).time.microseconds);
    #else
    printf("%s::time::microseconds %d\n", paramName, (*pData).time.microseconds);
    #endif
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_samples_Wrenches_m(const char *paramName, const asn1SccBase_samples_Wrenches_m *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    {
        int i32;
        for(i32=0; i32<(*pData).names.nCount; i32++) {
            {
                int i;
                printf("%s::names::Elem ", paramName);
                for(i=0; i<(*pData).names.arr[i32].nCount; i++)
                    printf("%c", (*pData).names.arr[i32].arr[i]);
                printf("\n");
            }

        }
    }
    {
        int i33;
        for(i33=0; i33<(*pData).elements.nCount; i33++) {
            {
                int i34;
                for(i34=0; i34<(*pData).elements.arr[i33].force.data.nCount; i34++) {
                    printf("%s::elements::Elem::force::data::Elem %f\n", paramName, (*pData).elements.arr[i33].force.data.arr[i34]);
                }
            }
            {
                int i35;
                for(i35=0; i35<(*pData).elements.arr[i33].torque.data.nCount; i35++) {
                    printf("%s::elements::Elem::torque::data::Elem %f\n", paramName, (*pData).elements.arr[i33].torque.data.arr[i35]);
                }
            }
        }
    }
    #if WORD_SIZE==8
    printf("%s::time::microseconds %lld\n", paramName, (*pData).time.microseconds);
    #else
    printf("%s::time::microseconds %d\n", paramName, (*pData).time.microseconds);
    #endif
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_samples_DepthMap_DEPTH_MEASUREMENT_STATE(const char *paramName, const asn1SccBase_samples_DepthMap_DEPTH_MEASUREMENT_STATE *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    printf("%s %d\n", paramName, (int)(*pData));
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_NamedVector_Base_JointLimitRange(const char *paramName, const asn1SccBase_NamedVector_Base_JointLimitRange *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    {
        int i36;
        for(i36=0; i36<(*pData).names.nCount; i36++) {
            {
                int i;
                printf("%s::names::Elem ", paramName);
                for(i=0; i<(*pData).names.arr[i36].nCount; i++)
                    printf("%c", (*pData).names.arr[i36].arr[i]);
                printf("\n");
            }

        }
    }
    {
        int i37;
        for(i37=0; i37<(*pData).elements.nCount; i37++) {
            printf("%s::elements::Elem::min::position %f\n", paramName, (*pData).elements.arr[i37].min.position);
            printf("%s::elements::Elem::min::speed %f\n", paramName, (*pData).elements.arr[i37].min.speed);
            printf("%s::elements::Elem::min::effort %f\n", paramName, (*pData).elements.arr[i37].min.effort);
            printf("%s::elements::Elem::min::raw %f\n", paramName, (*pData).elements.arr[i37].min.raw);
            printf("%s::elements::Elem::min::acceleration %f\n", paramName, (*pData).elements.arr[i37].min.acceleration);
            printf("%s::elements::Elem::max::position %f\n", paramName, (*pData).elements.arr[i37].max.position);
            printf("%s::elements::Elem::max::speed %f\n", paramName, (*pData).elements.arr[i37].max.speed);
            printf("%s::elements::Elem::max::effort %f\n", paramName, (*pData).elements.arr[i37].max.effort);
            printf("%s::elements::Elem::max::raw %f\n", paramName, (*pData).elements.arr[i37].max.raw);
            printf("%s::elements::Elem::max::acceleration %f\n", paramName, (*pData).elements.arr[i37].max.acceleration);
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_Temperature(const char *paramName, const asn1SccBase_Temperature *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    printf("%s::kelvin %f\n", paramName, (*pData).kelvin);
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_samples_Wrenches(const char *paramName, const asn1SccBase_samples_Wrenches *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    {
        int i38;
        for(i38=0; i38<(*pData).names.nCount; i38++) {
            {
                int i;
                printf("%s::names::Elem ", paramName);
                for(i=0; i<(*pData).names.arr[i38].nCount; i++)
                    printf("%c", (*pData).names.arr[i38].arr[i]);
                printf("\n");
            }

        }
    }
    {
        int i39;
        for(i39=0; i39<(*pData).elements.nCount; i39++) {
            {
                int i40;
                for(i40=0; i40<(*pData).elements.arr[i39].force.data.nCount; i40++) {
                    printf("%s::elements::Elem::force::data::Elem %f\n", paramName, (*pData).elements.arr[i39].force.data.arr[i40]);
                }
            }
            {
                int i41;
                for(i41=0; i41<(*pData).elements.arr[i39].torque.data.nCount; i41++) {
                    printf("%s::elements::Elem::torque::data::Elem %f\n", paramName, (*pData).elements.arr[i39].torque.data.arr[i41]);
                }
            }
        }
    }
    #if WORD_SIZE==8
    printf("%s::time::microseconds %lld\n", paramName, (*pData).time.microseconds);
    #else
    printf("%s::time::microseconds %d\n", paramName, (*pData).time.microseconds);
    #endif
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_Wrench(const char *paramName, const asn1SccBase_Wrench *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    {
        int i42;
        for(i42=0; i42<(*pData).force.data.nCount; i42++) {
            printf("%s::force::data::Elem %f\n", paramName, (*pData).force.data.arr[i42]);
        }
    }
    {
        int i43;
        for(i43=0; i43<(*pData).torque.data.nCount; i43++) {
            printf("%s::torque::data::Elem %f\n", paramName, (*pData).torque.data.arr[i43]);
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_samples_frame_frame_attrib_t(const char *paramName, const asn1SccBase_samples_frame_frame_attrib_t *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    {
        int i;
        printf("%s::data ", paramName);
        for(i=0; i<(*pData).data.nCount; i++)
            printf("%c", (*pData).data.arr[i]);
        printf("\n");
    }

    {
        int i;
        printf("%s::name_val ", paramName);
        for(i=0; i<(*pData).name_val.nCount; i++)
            printf("%c", (*pData).name_val.arr[i]);
        printf("\n");
    }

#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintWrappers_Matrix3d(const char *paramName, const asn1SccWrappers_Matrix3d *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    {
        int i44;
        for(i44=0; i44<(*pData).data.nCount; i44++) {
            printf("%s::data::Elem %f\n", paramName, (*pData).data.arr[i44]);
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_samples_BodyState_m(const char *paramName, const asn1SccBase_samples_BodyState_m *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    #if WORD_SIZE==8
    printf("%s::time::microseconds %lld\n", paramName, (*pData).time.microseconds);
    #else
    printf("%s::time::microseconds %d\n", paramName, (*pData).time.microseconds);
    #endif
    {
        int i45;
        for(i45=0; i45<(*pData).pose.translation.data.nCount; i45++) {
            printf("%s::pose::translation::data::Elem %f\n", paramName, (*pData).pose.translation.data.arr[i45]);
        }
    }
    {
        int i46;
        for(i46=0; i46<(*pData).pose.orientation.im.nCount; i46++) {
            printf("%s::pose::orientation::im::Elem %f\n", paramName, (*pData).pose.orientation.im.arr[i46]);
        }
    }
    printf("%s::pose::orientation::re %f\n", paramName, (*pData).pose.orientation.re);
    {
        int i47;
        for(i47=0; i47<(*pData).pose.cov.data.nCount; i47++) {
            printf("%s::pose::cov::data::Elem %f\n", paramName, (*pData).pose.cov.data.arr[i47]);
        }
    }
    {
        int i48;
        for(i48=0; i48<(*pData).velocity.vel.data.nCount; i48++) {
            printf("%s::velocity::vel::data::Elem %f\n", paramName, (*pData).velocity.vel.data.arr[i48]);
        }
    }
    {
        int i49;
        for(i49=0; i49<(*pData).velocity.rot.data.nCount; i49++) {
            printf("%s::velocity::rot::data::Elem %f\n", paramName, (*pData).velocity.rot.data.arr[i49]);
        }
    }
    {
        int i50;
        for(i50=0; i50<(*pData).velocity.cov.data.nCount; i50++) {
            printf("%s::velocity::cov::data::Elem %f\n", paramName, (*pData).velocity.cov.data.arr[i50]);
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintT_Int64(const char *paramName, const asn1SccT_Int64 *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    #if WORD_SIZE==8
    printf("%s %lld\n", paramName, (*pData));
    #else
    printf("%s %d\n", paramName, (*pData));
    #endif
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_JointTransformVector_m(const char *paramName, const asn1SccBase_JointTransformVector_m *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    {
        int i51;
        for(i51=0; i51<(*pData).names.nCount; i51++) {
            {
                int i;
                printf("%s::names::Elem ", paramName);
                for(i=0; i<(*pData).names.arr[i51].nCount; i++)
                    printf("%c", (*pData).names.arr[i51].arr[i]);
                printf("\n");
            }

        }
    }
    {
        int i52;
        for(i52=0; i52<(*pData).elements.nCount; i52++) {
            {
                int i;
                printf("%s::elements::Elem::sourceframe ", paramName);
                for(i=0; i<(*pData).elements.arr[i52].sourceframe.nCount; i++)
                    printf("%c", (*pData).elements.arr[i52].sourceframe.arr[i]);
                printf("\n");
            }

            {
                int i;
                printf("%s::elements::Elem::targetframe ", paramName);
                for(i=0; i<(*pData).elements.arr[i52].targetframe.nCount; i++)
                    printf("%c", (*pData).elements.arr[i52].targetframe.arr[i]);
                printf("\n");
            }

            {
                int i53;
                for(i53=0; i53<(*pData).elements.arr[i52].rotationaxis.data.nCount; i53++) {
                    printf("%s::elements::Elem::rotationaxis::data::Elem %f\n", paramName, (*pData).elements.arr[i52].rotationaxis.data.arr[i53]);
                }
            }
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_samples_SonarBeam(const char *paramName, const asn1SccBase_samples_SonarBeam *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    #if WORD_SIZE==8
    printf("%s::time::microseconds %lld\n", paramName, (*pData).time.microseconds);
    #else
    printf("%s::time::microseconds %d\n", paramName, (*pData).time.microseconds);
    #endif
    printf("%s::bearing::rad %f\n", paramName, (*pData).bearing.rad);
    printf("%s::sampling_interval %f\n", paramName, (*pData).sampling_interval);
    printf("%s::speed_of_sound %f\n", paramName, (*pData).speed_of_sound);
    printf("%s::beamwidth_horizontal %f\n", paramName, (*pData).beamwidth_horizontal);
    printf("%s::beamwidth_vertical %f\n", paramName, (*pData).beamwidth_vertical);
    {
        int i;
        printf("%s::beam ", paramName);
        for(i=0; i<(*pData).beam.nCount; i++)
            printf("%c", (*pData).beam.arr[i]);
        printf("\n");
    }

#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_samples_LaserScan(const char *paramName, const asn1SccBase_samples_LaserScan *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    #if WORD_SIZE==8
    printf("%s::time::microseconds %lld\n", paramName, (*pData).time.microseconds);
    #else
    printf("%s::time::microseconds %d\n", paramName, (*pData).time.microseconds);
    #endif
    printf("%s::start_angle %f\n", paramName, (*pData).start_angle);
    printf("%s::angular_resolution %f\n", paramName, (*pData).angular_resolution);
    printf("%s::speed %f\n", paramName, (*pData).speed);
    {
        int i54;
        for(i54=0; i54<(*pData).ranges.nCount; i54++) {
            #if WORD_SIZE==8
            printf("%s::ranges::Elem %lld\n", paramName, (*pData).ranges.arr[i54]);
            #else
            printf("%s::ranges::Elem %d\n", paramName, (*pData).ranges.arr[i54]);
            #endif
        }
    }
    #if WORD_SIZE==8
    printf("%s::minrange %lld\n", paramName, (*pData).minrange);
    #else
    printf("%s::minrange %d\n", paramName, (*pData).minrange);
    #endif
    #if WORD_SIZE==8
    printf("%s::maxrange %lld\n", paramName, (*pData).maxrange);
    #else
    printf("%s::maxrange %d\n", paramName, (*pData).maxrange);
    #endif
    {
        int i55;
        for(i55=0; i55<(*pData).remission.nCount; i55++) {
            printf("%s::remission::Elem %f\n", paramName, (*pData).remission.arr[i55]);
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_Wrench_m(const char *paramName, const asn1SccBase_Wrench_m *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    {
        int i56;
        for(i56=0; i56<(*pData).force.data.nCount; i56++) {
            printf("%s::force::data::Elem %f\n", paramName, (*pData).force.data.arr[i56]);
        }
    }
    {
        int i57;
        for(i57=0; i57<(*pData).torque.data.nCount; i57++) {
            printf("%s::torque::data::Elem %f\n", paramName, (*pData).torque.data.arr[i57]);
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_JointTransform_m(const char *paramName, const asn1SccBase_JointTransform_m *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    {
        int i;
        printf("%s::sourceframe ", paramName);
        for(i=0; i<(*pData).sourceframe.nCount; i++)
            printf("%c", (*pData).sourceframe.arr[i]);
        printf("\n");
    }

    {
        int i;
        printf("%s::targetframe ", paramName);
        for(i=0; i<(*pData).targetframe.nCount; i++)
            printf("%c", (*pData).targetframe.arr[i]);
        printf("\n");
    }

    {
        int i58;
        for(i58=0; i58<(*pData).rotationaxis.data.nCount; i58++) {
            printf("%s::rotationaxis::data::Elem %f\n", paramName, (*pData).rotationaxis.data.arr[i58]);
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_NamedVector_Base_Wrench(const char *paramName, const asn1SccBase_NamedVector_Base_Wrench *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    {
        int i59;
        for(i59=0; i59<(*pData).names.nCount; i59++) {
            {
                int i;
                printf("%s::names::Elem ", paramName);
                for(i=0; i<(*pData).names.arr[i59].nCount; i++)
                    printf("%c", (*pData).names.arr[i59].arr[i]);
                printf("\n");
            }

        }
    }
    {
        int i60;
        for(i60=0; i60<(*pData).elements.nCount; i60++) {
            {
                int i61;
                for(i61=0; i61<(*pData).elements.arr[i60].force.data.nCount; i61++) {
                    printf("%s::elements::Elem::force::data::Elem %f\n", paramName, (*pData).elements.arr[i60].force.data.arr[i61]);
                }
            }
            {
                int i62;
                for(i62=0; i62<(*pData).elements.arr[i60].torque.data.nCount; i62++) {
                    printf("%s::elements::Elem::torque::data::Elem %f\n", paramName, (*pData).elements.arr[i60].torque.data.arr[i62]);
                }
            }
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_samples_RigidBodyAcceleration(const char *paramName, const asn1SccBase_samples_RigidBodyAcceleration *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    #if WORD_SIZE==8
    printf("%s::time::microseconds %lld\n", paramName, (*pData).time.microseconds);
    #else
    printf("%s::time::microseconds %d\n", paramName, (*pData).time.microseconds);
    #endif
    {
        int i63;
        for(i63=0; i63<(*pData).acceleration.data.nCount; i63++) {
            printf("%s::acceleration::data::Elem %f\n", paramName, (*pData).acceleration.data.arr[i63]);
        }
    }
    {
        int i64;
        for(i64=0; i64<(*pData).cov_acceleration.data.nCount; i64++) {
            printf("%s::cov_acceleration::data::Elem %f\n", paramName, (*pData).cov_acceleration.data.arr[i64]);
        }
    }
    {
        int i65;
        for(i65=0; i65<(*pData).angular_acceleration.data.nCount; i65++) {
            printf("%s::angular_acceleration::data::Elem %f\n", paramName, (*pData).angular_acceleration.data.arr[i65]);
        }
    }
    {
        int i66;
        for(i66=0; i66<(*pData).cov_angular_acceleration.data.nCount; i66++) {
            printf("%s::cov_angular_acceleration::data::Elem %f\n", paramName, (*pData).cov_angular_acceleration.data.arr[i66]);
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_Time_Resolution(const char *paramName, const asn1SccBase_Time_Resolution *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    printf("%s %d\n", paramName, (int)(*pData));
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintT_Double(const char *paramName, const asn1SccT_Double *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    printf("%s %f\n", paramName, (*pData));
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_TimeStamped_Base_commands_Motion2D(const char *paramName, const asn1SccBase_TimeStamped_Base_commands_Motion2D *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    printf("%s::translation %f\n", paramName, (*pData).translation);
    printf("%s::rotation %f\n", paramName, (*pData).rotation);
    printf("%s::heading::rad %f\n", paramName, (*pData).heading.rad);
    #if WORD_SIZE==8
    printf("%s::time::microseconds %lld\n", paramName, (*pData).time.microseconds);
    #else
    printf("%s::time::microseconds %d\n", paramName, (*pData).time.microseconds);
    #endif
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintWrappers_Quaterniond(const char *paramName, const asn1SccWrappers_Quaterniond *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    {
        int i67;
        for(i67=0; i67<(*pData).im.nCount; i67++) {
            printf("%s::im::Elem %f\n", paramName, (*pData).im.arr[i67]);
        }
    }
    printf("%s::re %f\n", paramName, (*pData).re);
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_commands_Speed6D(const char *paramName, const asn1SccBase_commands_Speed6D *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    printf("%s::surge %f\n", paramName, (*pData).surge);
    printf("%s::sway %f\n", paramName, (*pData).sway);
    printf("%s::heave %f\n", paramName, (*pData).heave);
    printf("%s::roll %f\n", paramName, (*pData).roll);
    printf("%s::pitch %f\n", paramName, (*pData).pitch);
    printf("%s::yaw %f\n", paramName, (*pData).yaw);
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_NamedVector_Base_JointTrajectory(const char *paramName, const asn1SccBase_NamedVector_Base_JointTrajectory *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    {
        int i68;
        for(i68=0; i68<(*pData).names.nCount; i68++) {
            {
                int i;
                printf("%s::names::Elem ", paramName);
                for(i=0; i<(*pData).names.arr[i68].nCount; i++)
                    printf("%c", (*pData).names.arr[i68].arr[i]);
                printf("\n");
            }

        }
    }
    {
        int i69;
        for(i69=0; i69<(*pData).elements.nCount; i69++) {
            {
                int i70;
                for(i70=0; i70<(*pData).elements.arr[i69].nCount; i70++) {
                    printf("%s::elements::Elem::Elem::position %f\n", paramName, (*pData).elements.arr[i69].arr[i70].position);
                    printf("%s::elements::Elem::Elem::speed %f\n", paramName, (*pData).elements.arr[i69].arr[i70].speed);
                    printf("%s::elements::Elem::Elem::effort %f\n", paramName, (*pData).elements.arr[i69].arr[i70].effort);
                    printf("%s::elements::Elem::Elem::raw %f\n", paramName, (*pData).elements.arr[i69].arr[i70].raw);
                    printf("%s::elements::Elem::Elem::acceleration %f\n", paramName, (*pData).elements.arr[i69].arr[i70].acceleration);
                }
            }
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintStd_orogen_typekits_mtype_std_vector_base_JointTransform(const char *paramName, const asn1SccStd_orogen_typekits_mtype_std_vector_base_JointTransform *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    {
        int i71;
        for(i71=0; i71<(*pData).nCount; i71++) {
            {
                int i;
                printf("%s::Elem::sourceframe ", paramName);
                for(i=0; i<(*pData).arr[i71].sourceframe.nCount; i++)
                    printf("%c", (*pData).arr[i71].sourceframe.arr[i]);
                printf("\n");
            }

            {
                int i;
                printf("%s::Elem::targetframe ", paramName);
                for(i=0; i<(*pData).arr[i71].targetframe.nCount; i++)
                    printf("%c", (*pData).arr[i71].targetframe.arr[i]);
                printf("\n");
            }

            {
                int i72;
                for(i72=0; i72<(*pData).arr[i71].rotationaxis.data.nCount; i72++) {
                    printf("%s::Elem::rotationaxis::data::Elem %f\n", paramName, (*pData).arr[i71].rotationaxis.data.arr[i72]);
                }
            }
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintT_String(const char *paramName, const asn1SccT_String *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    {
        int i;
        printf("%s ", paramName);
        for(i=0; i<(*pData).nCount; i++)
            printf("%c", (*pData).arr[i]);
        printf("\n");
    }

#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_Waypoint_m(const char *paramName, const asn1SccBase_Waypoint_m *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    {
        int i73;
        for(i73=0; i73<(*pData).position.data.nCount; i73++) {
            printf("%s::position::data::Elem %f\n", paramName, (*pData).position.data.arr[i73]);
        }
    }
    printf("%s::heading %f\n", paramName, (*pData).heading);
    printf("%s::tol_position %f\n", paramName, (*pData).tol_position);
    printf("%s::tol_heading %f\n", paramName, (*pData).tol_heading);
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_TwistWithCovariance(const char *paramName, const asn1SccBase_TwistWithCovariance *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    {
        int i74;
        for(i74=0; i74<(*pData).vel.data.nCount; i74++) {
            printf("%s::vel::data::Elem %f\n", paramName, (*pData).vel.data.arr[i74]);
        }
    }
    {
        int i75;
        for(i75=0; i75<(*pData).rot.data.nCount; i75++) {
            printf("%s::rot::data::Elem %f\n", paramName, (*pData).rot.data.arr[i75]);
        }
    }
    {
        int i76;
        for(i76=0; i76<(*pData).cov.data.nCount; i76++) {
            printf("%s::cov::data::Elem %f\n", paramName, (*pData).cov.data.arr[i76]);
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintWrappers_Matrix2d(const char *paramName, const asn1SccWrappers_Matrix2d *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    {
        int i77;
        for(i77=0; i77<(*pData).data.nCount; i77++) {
            printf("%s::data::Elem %f\n", paramName, (*pData).data.arr[i77]);
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_NamedVector_base_Wrench_m(const char *paramName, const asn1SccBase_NamedVector_base_Wrench_m *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    {
        int i78;
        for(i78=0; i78<(*pData).names.nCount; i78++) {
            {
                int i;
                printf("%s::names::Elem ", paramName);
                for(i=0; i<(*pData).names.arr[i78].nCount; i++)
                    printf("%c", (*pData).names.arr[i78].arr[i]);
                printf("\n");
            }

        }
    }
    {
        int i79;
        for(i79=0; i79<(*pData).elements.nCount; i79++) {
            {
                int i80;
                for(i80=0; i80<(*pData).elements.arr[i79].force.data.nCount; i80++) {
                    printf("%s::elements::Elem::force::data::Elem %f\n", paramName, (*pData).elements.arr[i79].force.data.arr[i80]);
                }
            }
            {
                int i81;
                for(i81=0; i81<(*pData).elements.arr[i79].torque.data.nCount; i81++) {
                    printf("%s::elements::Elem::torque::data::Elem %f\n", paramName, (*pData).elements.arr[i79].torque.data.arr[i81]);
                }
            }
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_samples_Motion2D(const char *paramName, const asn1SccBase_samples_Motion2D *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    printf("%s::translation %f\n", paramName, (*pData).translation);
    printf("%s::rotation %f\n", paramName, (*pData).rotation);
    printf("%s::heading::rad %f\n", paramName, (*pData).heading.rad);
    #if WORD_SIZE==8
    printf("%s::time::microseconds %lld\n", paramName, (*pData).time.microseconds);
    #else
    printf("%s::time::microseconds %d\n", paramName, (*pData).time.microseconds);
    #endif
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintWrappers_geometry_SplineType(const char *paramName, const asn1SccWrappers_geometry_SplineType *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    printf("%s %d\n", paramName, (int)(*pData));
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_Pose_m(const char *paramName, const asn1SccBase_Pose_m *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    {
        int i82;
        for(i82=0; i82<(*pData).position.data.nCount; i82++) {
            printf("%s::position::data::Elem %f\n", paramName, (*pData).position.data.arr[i82]);
        }
    }
    {
        int i83;
        for(i83=0; i83<(*pData).orientation.im.nCount; i83++) {
            printf("%s::orientation::im::Elem %f\n", paramName, (*pData).orientation.im.arr[i83]);
        }
    }
    printf("%s::orientation::re %f\n", paramName, (*pData).orientation.re);
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_samples_RigidBodyAcceleration_m(const char *paramName, const asn1SccBase_samples_RigidBodyAcceleration_m *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    #if WORD_SIZE==8
    printf("%s::time::microseconds %lld\n", paramName, (*pData).time.microseconds);
    #else
    printf("%s::time::microseconds %d\n", paramName, (*pData).time.microseconds);
    #endif
    {
        int i84;
        for(i84=0; i84<(*pData).acceleration.data.nCount; i84++) {
            printf("%s::acceleration::data::Elem %f\n", paramName, (*pData).acceleration.data.arr[i84]);
        }
    }
    {
        int i85;
        for(i85=0; i85<(*pData).cov_acceleration.data.nCount; i85++) {
            printf("%s::cov_acceleration::data::Elem %f\n", paramName, (*pData).cov_acceleration.data.arr[i85]);
        }
    }
    {
        int i86;
        for(i86=0; i86<(*pData).angular_acceleration.data.nCount; i86++) {
            printf("%s::angular_acceleration::data::Elem %f\n", paramName, (*pData).angular_acceleration.data.arr[i86]);
        }
    }
    {
        int i87;
        for(i87=0; i87<(*pData).cov_angular_acceleration.data.nCount; i87++) {
            printf("%s::cov_angular_acceleration::data::Elem %f\n", paramName, (*pData).cov_angular_acceleration.data.arr[i87]);
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_Pressure(const char *paramName, const asn1SccBase_Pressure *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    printf("%s::pascal %f\n", paramName, (*pData).pascal);
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintStd_vector_Wrappers_Vector4d(const char *paramName, const asn1SccStd_vector_Wrappers_Vector4d *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    {
        int i88;
        for(i88=0; i88<(*pData).nCount; i88++) {
            {
                int i89;
                for(i89=0; i89<(*pData).arr[i88].data.nCount; i89++) {
                    printf("%s::Elem::data::Elem %f\n", paramName, (*pData).arr[i88].data.arr[i89]);
                }
            }
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_JointLimitRange(const char *paramName, const asn1SccBase_JointLimitRange *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    printf("%s::min::position %f\n", paramName, (*pData).min.position);
    printf("%s::min::speed %f\n", paramName, (*pData).min.speed);
    printf("%s::min::effort %f\n", paramName, (*pData).min.effort);
    printf("%s::min::raw %f\n", paramName, (*pData).min.raw);
    printf("%s::min::acceleration %f\n", paramName, (*pData).min.acceleration);
    printf("%s::max::position %f\n", paramName, (*pData).max.position);
    printf("%s::max::speed %f\n", paramName, (*pData).max.speed);
    printf("%s::max::effort %f\n", paramName, (*pData).max.effort);
    printf("%s::max::raw %f\n", paramName, (*pData).max.raw);
    printf("%s::max::acceleration %f\n", paramName, (*pData).max.acceleration);
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_samples_DepthMap_UNIT_AXIS(const char *paramName, const asn1SccBase_samples_DepthMap_UNIT_AXIS *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    printf("%s %d\n", paramName, (int)(*pData));
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_samples_Pressure(const char *paramName, const asn1SccBase_samples_Pressure *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    printf("%s::pascal %f\n", paramName, (*pData).pascal);
    #if WORD_SIZE==8
    printf("%s::time::microseconds %lld\n", paramName, (*pData).time.microseconds);
    #else
    printf("%s::time::microseconds %d\n", paramName, (*pData).time.microseconds);
    #endif
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_PoseUpdateThreshold(const char *paramName, const asn1SccBase_PoseUpdateThreshold *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    printf("%s::distance %f\n", paramName, (*pData).distance);
    printf("%s::angle %f\n", paramName, (*pData).angle);
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintStd_orogen_typekits_mtype_std_vector_base_Wrench(const char *paramName, const asn1SccStd_orogen_typekits_mtype_std_vector_base_Wrench *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    {
        int i90;
        for(i90=0; i90<(*pData).nCount; i90++) {
            {
                int i91;
                for(i91=0; i91<(*pData).arr[i90].force.data.nCount; i91++) {
                    printf("%s::Elem::force::data::Elem %f\n", paramName, (*pData).arr[i90].force.data.arr[i91]);
                }
            }
            {
                int i92;
                for(i92=0; i92<(*pData).arr[i90].torque.data.nCount; i92++) {
                    printf("%s::Elem::torque::data::Elem %f\n", paramName, (*pData).arr[i90].torque.data.arr[i92]);
                }
            }
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_JointTransformVector(const char *paramName, const asn1SccBase_JointTransformVector *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    {
        int i93;
        for(i93=0; i93<(*pData).names.nCount; i93++) {
            {
                int i;
                printf("%s::names::Elem ", paramName);
                for(i=0; i<(*pData).names.arr[i93].nCount; i++)
                    printf("%c", (*pData).names.arr[i93].arr[i]);
                printf("\n");
            }

        }
    }
    {
        int i94;
        for(i94=0; i94<(*pData).elements.nCount; i94++) {
            {
                int i;
                printf("%s::elements::Elem::sourceframe ", paramName);
                for(i=0; i<(*pData).elements.arr[i94].sourceframe.nCount; i++)
                    printf("%c", (*pData).elements.arr[i94].sourceframe.arr[i]);
                printf("\n");
            }

            {
                int i;
                printf("%s::elements::Elem::targetframe ", paramName);
                for(i=0; i<(*pData).elements.arr[i94].targetframe.nCount; i++)
                    printf("%c", (*pData).elements.arr[i94].targetframe.arr[i]);
                printf("\n");
            }

            {
                int i95;
                for(i95=0; i95<(*pData).elements.arr[i94].rotationaxis.data.nCount; i95++) {
                    printf("%s::elements::Elem::rotationaxis::data::Elem %f\n", paramName, (*pData).elements.arr[i94].rotationaxis.data.arr[i95]);
                }
            }
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_Angle(const char *paramName, const asn1SccBase_Angle *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    printf("%s::rad %f\n", paramName, (*pData).rad);
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintT_Int8(const char *paramName, const asn1SccT_Int8 *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    #if WORD_SIZE==8
    printf("%s %lld\n", paramName, (*pData));
    #else
    printf("%s %d\n", paramName, (*pData));
    #endif
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintStd_orogen_typekits_mtype_std_vector_base_Waypoint(const char *paramName, const asn1SccStd_orogen_typekits_mtype_std_vector_base_Waypoint *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    {
        int i96;
        for(i96=0; i96<(*pData).nCount; i96++) {
            {
                int i97;
                for(i97=0; i97<(*pData).arr[i96].position.data.nCount; i97++) {
                    printf("%s::Elem::position::data::Elem %f\n", paramName, (*pData).arr[i96].position.data.arr[i97]);
                }
            }
            printf("%s::Elem::heading %f\n", paramName, (*pData).arr[i96].heading);
            printf("%s::Elem::tol_position %f\n", paramName, (*pData).arr[i96].tol_position);
            printf("%s::Elem::tol_heading %f\n", paramName, (*pData).arr[i96].tol_heading);
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintT_Int16(const char *paramName, const asn1SccT_Int16 *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    #if WORD_SIZE==8
    printf("%s %lld\n", paramName, (*pData));
    #else
    printf("%s %d\n", paramName, (*pData));
    #endif
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintT_Boolean(const char *paramName, const asn1SccT_Boolean *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    printf("%s %d\n", paramName, (int)(*pData));
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_JointState(const char *paramName, const asn1SccBase_JointState *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    printf("%s::position %f\n", paramName, (*pData).position);
    printf("%s::speed %f\n", paramName, (*pData).speed);
    printf("%s::effort %f\n", paramName, (*pData).effort);
    printf("%s::raw %f\n", paramName, (*pData).raw);
    printf("%s::acceleration %f\n", paramName, (*pData).acceleration);
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_JointTransform(const char *paramName, const asn1SccBase_JointTransform *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    {
        int i;
        printf("%s::sourceframe ", paramName);
        for(i=0; i<(*pData).sourceframe.nCount; i++)
            printf("%c", (*pData).sourceframe.arr[i]);
        printf("\n");
    }

    {
        int i;
        printf("%s::targetframe ", paramName);
        for(i=0; i<(*pData).targetframe.nCount; i++)
            printf("%c", (*pData).targetframe.arr[i]);
        printf("\n");
    }

    {
        int i98;
        for(i98=0; i98<(*pData).rotationaxis.data.nCount; i98++) {
            printf("%s::rotationaxis::data::Elem %f\n", paramName, (*pData).rotationaxis.data.arr[i98]);
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_samples_DepthMap_PROJECTION_TYPE(const char *paramName, const asn1SccBase_samples_DepthMap_PROJECTION_TYPE *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    printf("%s %d\n", paramName, (int)(*pData));
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_Pose(const char *paramName, const asn1SccBase_Pose *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    {
        int i99;
        for(i99=0; i99<(*pData).position.data.nCount; i99++) {
            printf("%s::position::data::Elem %f\n", paramName, (*pData).position.data.arr[i99]);
        }
    }
    {
        int i100;
        for(i100=0; i100<(*pData).orientation.im.nCount; i100++) {
            printf("%s::orientation::im::Elem %f\n", paramName, (*pData).orientation.im.arr[i100]);
        }
    }
    printf("%s::orientation::re %f\n", paramName, (*pData).orientation.re);
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintWrappers_MatrixXd(const char *paramName, const asn1SccWrappers_MatrixXd *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    #if WORD_SIZE==8
    printf("%s::rows %lld\n", paramName, (*pData).rows);
    #else
    printf("%s::rows %d\n", paramName, (*pData).rows);
    #endif
    #if WORD_SIZE==8
    printf("%s::cols %lld\n", paramName, (*pData).cols);
    #else
    printf("%s::cols %d\n", paramName, (*pData).cols);
    #endif
    {
        int i101;
        for(i101=0; i101<(*pData).data.nCount; i101++) {
            printf("%s::data::Elem %f\n", paramName, (*pData).data.arr[i101]);
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintStd_orogen_typekits_mtype_std_vector_base_Trajectory(const char *paramName, const asn1SccStd_orogen_typekits_mtype_std_vector_base_Trajectory *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    {
        int i102;
        for(i102=0; i102<(*pData).nCount; i102++) {
            printf("%s::Elem::speed %f\n", paramName, (*pData).arr[i102].speed);
            printf("%s::Elem::spline::geometric_resolution %f\n", paramName, (*pData).arr[i102].spline.geometric_resolution);
            #if WORD_SIZE==8
            printf("%s::Elem::spline::dimension %lld\n", paramName, (*pData).arr[i102].spline.dimension);
            #else
            printf("%s::Elem::spline::dimension %d\n", paramName, (*pData).arr[i102].spline.dimension);
            #endif
            #if WORD_SIZE==8
            printf("%s::Elem::spline::curve_order %lld\n", paramName, (*pData).arr[i102].spline.curve_order);
            #else
            printf("%s::Elem::spline::curve_order %d\n", paramName, (*pData).arr[i102].spline.curve_order);
            #endif
            printf("%s::Elem::spline::kind %d\n", paramName, (int)(*pData).arr[i102].spline.kind);
            {
                int i103;
                for(i103=0; i103<(*pData).arr[i102].spline.knots.nCount; i103++) {
                    printf("%s::Elem::spline::knots::Elem %f\n", paramName, (*pData).arr[i102].spline.knots.arr[i103]);
                }
            }
            {
                int i104;
                for(i104=0; i104<(*pData).arr[i102].spline.vertices.nCount; i104++) {
                    printf("%s::Elem::spline::vertices::Elem %f\n", paramName, (*pData).arr[i102].spline.vertices.arr[i104]);
                }
            }
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_samples_IMUSensors(const char *paramName, const asn1SccBase_samples_IMUSensors *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    #if WORD_SIZE==8
    printf("%s::time::microseconds %lld\n", paramName, (*pData).time.microseconds);
    #else
    printf("%s::time::microseconds %d\n", paramName, (*pData).time.microseconds);
    #endif
    {
        int i105;
        for(i105=0; i105<(*pData).acc.data.nCount; i105++) {
            printf("%s::acc::data::Elem %f\n", paramName, (*pData).acc.data.arr[i105]);
        }
    }
    {
        int i106;
        for(i106=0; i106<(*pData).gyro.data.nCount; i106++) {
            printf("%s::gyro::data::Elem %f\n", paramName, (*pData).gyro.data.arr[i106]);
        }
    }
    {
        int i107;
        for(i107=0; i107<(*pData).mag.data.nCount; i107++) {
            printf("%s::mag::data::Elem %f\n", paramName, (*pData).mag.data.arr[i107]);
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_Pose2D(const char *paramName, const asn1SccBase_Pose2D *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    {
        int i108;
        for(i108=0; i108<(*pData).position.data.nCount; i108++) {
            printf("%s::position::data::Elem %f\n", paramName, (*pData).position.data.arr[i108]);
        }
    }
    printf("%s::orientation %f\n", paramName, (*pData).orientation);
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_samples_Pointcloud_m(const char *paramName, const asn1SccBase_samples_Pointcloud_m *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    #if WORD_SIZE==8
    printf("%s::time::microseconds %lld\n", paramName, (*pData).time.microseconds);
    #else
    printf("%s::time::microseconds %d\n", paramName, (*pData).time.microseconds);
    #endif
    {
        int i109;
        for(i109=0; i109<(*pData).points.nCount; i109++) {
            {
                int i110;
                for(i110=0; i110<(*pData).points.arr[i109].data.nCount; i110++) {
                    printf("%s::points::Elem::data::Elem %f\n", paramName, (*pData).points.arr[i109].data.arr[i110]);
                }
            }
        }
    }
    {
        int i111;
        for(i111=0; i111<(*pData).colors.nCount; i111++) {
            {
                int i112;
                for(i112=0; i112<(*pData).colors.arr[i111].data.nCount; i112++) {
                    printf("%s::colors::Elem::data::Elem %f\n", paramName, (*pData).colors.arr[i111].data.arr[i112]);
                }
            }
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_samples_RigidBodyState(const char *paramName, const asn1SccBase_samples_RigidBodyState *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    #if WORD_SIZE==8
    printf("%s::time::microseconds %lld\n", paramName, (*pData).time.microseconds);
    #else
    printf("%s::time::microseconds %d\n", paramName, (*pData).time.microseconds);
    #endif
    {
        int i;
        printf("%s::sourceframe ", paramName);
        for(i=0; i<(*pData).sourceframe.nCount; i++)
            printf("%c", (*pData).sourceframe.arr[i]);
        printf("\n");
    }

    {
        int i;
        printf("%s::targetframe ", paramName);
        for(i=0; i<(*pData).targetframe.nCount; i++)
            printf("%c", (*pData).targetframe.arr[i]);
        printf("\n");
    }

    {
        int i113;
        for(i113=0; i113<(*pData).position.data.nCount; i113++) {
            printf("%s::position::data::Elem %f\n", paramName, (*pData).position.data.arr[i113]);
        }
    }
    {
        int i114;
        for(i114=0; i114<(*pData).cov_position.data.nCount; i114++) {
            printf("%s::cov_position::data::Elem %f\n", paramName, (*pData).cov_position.data.arr[i114]);
        }
    }
    {
        int i115;
        for(i115=0; i115<(*pData).orientation.im.nCount; i115++) {
            printf("%s::orientation::im::Elem %f\n", paramName, (*pData).orientation.im.arr[i115]);
        }
    }
    printf("%s::orientation::re %f\n", paramName, (*pData).orientation.re);
    {
        int i116;
        for(i116=0; i116<(*pData).cov_orientation.data.nCount; i116++) {
            printf("%s::cov_orientation::data::Elem %f\n", paramName, (*pData).cov_orientation.data.arr[i116]);
        }
    }
    {
        int i117;
        for(i117=0; i117<(*pData).velocity.data.nCount; i117++) {
            printf("%s::velocity::data::Elem %f\n", paramName, (*pData).velocity.data.arr[i117]);
        }
    }
    {
        int i118;
        for(i118=0; i118<(*pData).cov_velocity.data.nCount; i118++) {
            printf("%s::cov_velocity::data::Elem %f\n", paramName, (*pData).cov_velocity.data.arr[i118]);
        }
    }
    {
        int i119;
        for(i119=0; i119<(*pData).angular_velocity.data.nCount; i119++) {
            printf("%s::angular_velocity::data::Elem %f\n", paramName, (*pData).angular_velocity.data.arr[i119]);
        }
    }
    {
        int i120;
        for(i120=0; i120<(*pData).cov_angular_velocity.data.nCount; i120++) {
            printf("%s::cov_angular_velocity::data::Elem %f\n", paramName, (*pData).cov_angular_velocity.data.arr[i120]);
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_samples_frame_frame_mode_t(const char *paramName, const asn1SccBase_samples_frame_frame_mode_t *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    printf("%s %d\n", paramName, (int)(*pData));
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_samples_LASER_RANGE_ERRORS(const char *paramName, const asn1SccBase_samples_LASER_RANGE_ERRORS *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    printf("%s %d\n", paramName, (int)(*pData));
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_NamedVector_Base_JointTransform(const char *paramName, const asn1SccBase_NamedVector_Base_JointTransform *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    {
        int i121;
        for(i121=0; i121<(*pData).names.nCount; i121++) {
            {
                int i;
                printf("%s::names::Elem ", paramName);
                for(i=0; i<(*pData).names.arr[i121].nCount; i++)
                    printf("%c", (*pData).names.arr[i121].arr[i]);
                printf("\n");
            }

        }
    }
    {
        int i122;
        for(i122=0; i122<(*pData).elements.nCount; i122++) {
            {
                int i;
                printf("%s::elements::Elem::sourceframe ", paramName);
                for(i=0; i<(*pData).elements.arr[i122].sourceframe.nCount; i++)
                    printf("%c", (*pData).elements.arr[i122].sourceframe.arr[i]);
                printf("\n");
            }

            {
                int i;
                printf("%s::elements::Elem::targetframe ", paramName);
                for(i=0; i<(*pData).elements.arr[i122].targetframe.nCount; i++)
                    printf("%c", (*pData).elements.arr[i122].targetframe.arr[i]);
                printf("\n");
            }

            {
                int i123;
                for(i123=0; i123<(*pData).elements.arr[i122].rotationaxis.data.nCount; i123++) {
                    printf("%s::elements::Elem::rotationaxis::data::Elem %f\n", paramName, (*pData).elements.arr[i122].rotationaxis.data.arr[i123]);
                }
            }
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintWrappers_Matrix4d(const char *paramName, const asn1SccWrappers_Matrix4d *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    {
        int i124;
        for(i124=0; i124<(*pData).data.nCount; i124++) {
            printf("%s::data::Elem %f\n", paramName, (*pData).data.arr[i124]);
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintT_Time(const char *paramName, const asn1SccT_Time *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    #if WORD_SIZE==8
    printf("%s::secs %lld\n", paramName, (*pData).secs);
    #else
    printf("%s::secs %d\n", paramName, (*pData).secs);
    #endif
    #if WORD_SIZE==8
    printf("%s::nsecs %lld\n", paramName, (*pData).nsecs);
    #else
    printf("%s::nsecs %d\n", paramName, (*pData).nsecs);
    #endif
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintWrappers_geometry_Spline(const char *paramName, const asn1SccWrappers_geometry_Spline *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    printf("%s::geometric_resolution %f\n", paramName, (*pData).geometric_resolution);
    #if WORD_SIZE==8
    printf("%s::dimension %lld\n", paramName, (*pData).dimension);
    #else
    printf("%s::dimension %d\n", paramName, (*pData).dimension);
    #endif
    #if WORD_SIZE==8
    printf("%s::curve_order %lld\n", paramName, (*pData).curve_order);
    #else
    printf("%s::curve_order %d\n", paramName, (*pData).curve_order);
    #endif
    printf("%s::kind %d\n", paramName, (int)(*pData).kind);
    {
        int i125;
        for(i125=0; i125<(*pData).knots.nCount; i125++) {
            printf("%s::knots::Elem %f\n", paramName, (*pData).knots.arr[i125]);
        }
    }
    {
        int i126;
        for(i126=0; i126<(*pData).vertices.nCount; i126++) {
            printf("%s::vertices::Elem %f\n", paramName, (*pData).vertices.arr[i126]);
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_Trajectory(const char *paramName, const asn1SccBase_Trajectory *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    printf("%s::speed %f\n", paramName, (*pData).speed);
    printf("%s::spline::geometric_resolution %f\n", paramName, (*pData).spline.geometric_resolution);
    #if WORD_SIZE==8
    printf("%s::spline::dimension %lld\n", paramName, (*pData).spline.dimension);
    #else
    printf("%s::spline::dimension %d\n", paramName, (*pData).spline.dimension);
    #endif
    #if WORD_SIZE==8
    printf("%s::spline::curve_order %lld\n", paramName, (*pData).spline.curve_order);
    #else
    printf("%s::spline::curve_order %d\n", paramName, (*pData).spline.curve_order);
    #endif
    printf("%s::spline::kind %d\n", paramName, (int)(*pData).spline.kind);
    {
        int i127;
        for(i127=0; i127<(*pData).spline.knots.nCount; i127++) {
            printf("%s::spline::knots::Elem %f\n", paramName, (*pData).spline.knots.arr[i127]);
        }
    }
    {
        int i128;
        for(i128=0; i128<(*pData).spline.vertices.nCount; i128++) {
            printf("%s::spline::vertices::Elem %f\n", paramName, (*pData).spline.vertices.arr[i128]);
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintWrappers_Vector4d(const char *paramName, const asn1SccWrappers_Vector4d *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    {
        int i129;
        for(i129=0; i129<(*pData).data.nCount; i129++) {
            printf("%s::data::Elem %f\n", paramName, (*pData).data.arr[i129]);
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_samples_frame_frame_status_t(const char *paramName, const asn1SccBase_samples_frame_frame_status_t *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    printf("%s %d\n", paramName, (int)(*pData));
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintDummyBase_T(const char *paramName, const asn1SccDummyBase_T *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    #if WORD_SIZE==8
    printf("%s %lld\n", paramName, (*pData));
    #else
    printf("%s %d\n", paramName, (*pData));
    #endif
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_commands_Motion2D(const char *paramName, const asn1SccBase_commands_Motion2D *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    printf("%s::translation %f\n", paramName, (*pData).translation);
    printf("%s::rotation %f\n", paramName, (*pData).rotation);
    printf("%s::heading::rad %f\n", paramName, (*pData).heading.rad);
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_TransformWithCovariance(const char *paramName, const asn1SccBase_TransformWithCovariance *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    {
        int i130;
        for(i130=0; i130<(*pData).translation.data.nCount; i130++) {
            printf("%s::translation::data::Elem %f\n", paramName, (*pData).translation.data.arr[i130]);
        }
    }
    {
        int i131;
        for(i131=0; i131<(*pData).orientation.im.nCount; i131++) {
            printf("%s::orientation::im::Elem %f\n", paramName, (*pData).orientation.im.arr[i131]);
        }
    }
    printf("%s::orientation::re %f\n", paramName, (*pData).orientation.re);
    {
        int i132;
        for(i132=0; i132<(*pData).cov.data.nCount; i132++) {
            printf("%s::cov::data::Elem %f\n", paramName, (*pData).cov.data.arr[i132]);
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintWrappers_Vector6d(const char *paramName, const asn1SccWrappers_Vector6d *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    {
        int i133;
        for(i133=0; i133<(*pData).data.nCount; i133++) {
            printf("%s::data::Elem %f\n", paramName, (*pData).data.arr[i133]);
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintWrappers_AngleAxisd(const char *paramName, const asn1SccWrappers_AngleAxisd *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    printf("%s::angle %f\n", paramName, (*pData).angle);
    {
        int i134;
        for(i134=0; i134<(*pData).axis.nCount; i134++) {
            printf("%s::axis::Elem %f\n", paramName, (*pData).axis.arr[i134]);
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_NamedVector_Base_JointState(const char *paramName, const asn1SccBase_NamedVector_Base_JointState *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    {
        int i135;
        for(i135=0; i135<(*pData).names.nCount; i135++) {
            {
                int i;
                printf("%s::names::Elem ", paramName);
                for(i=0; i<(*pData).names.arr[i135].nCount; i++)
                    printf("%c", (*pData).names.arr[i135].arr[i]);
                printf("\n");
            }

        }
    }
    {
        int i136;
        for(i136=0; i136<(*pData).elements.nCount; i136++) {
            printf("%s::elements::Elem::position %f\n", paramName, (*pData).elements.arr[i136].position);
            printf("%s::elements::Elem::speed %f\n", paramName, (*pData).elements.arr[i136].speed);
            printf("%s::elements::Elem::effort %f\n", paramName, (*pData).elements.arr[i136].effort);
            printf("%s::elements::Elem::raw %f\n", paramName, (*pData).elements.arr[i136].raw);
            printf("%s::elements::Elem::acceleration %f\n", paramName, (*pData).elements.arr[i136].acceleration);
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_JointsTrajectory(const char *paramName, const asn1SccBase_JointsTrajectory *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    {
        int i137;
        for(i137=0; i137<(*pData).names.nCount; i137++) {
            {
                int i;
                printf("%s::names::Elem ", paramName);
                for(i=0; i<(*pData).names.arr[i137].nCount; i++)
                    printf("%c", (*pData).names.arr[i137].arr[i]);
                printf("\n");
            }

        }
    }
    {
        int i138;
        for(i138=0; i138<(*pData).elements.nCount; i138++) {
            {
                int i139;
                for(i139=0; i139<(*pData).elements.arr[i138].nCount; i139++) {
                    printf("%s::elements::Elem::Elem::position %f\n", paramName, (*pData).elements.arr[i138].arr[i139].position);
                    printf("%s::elements::Elem::Elem::speed %f\n", paramName, (*pData).elements.arr[i138].arr[i139].speed);
                    printf("%s::elements::Elem::Elem::effort %f\n", paramName, (*pData).elements.arr[i138].arr[i139].effort);
                    printf("%s::elements::Elem::Elem::raw %f\n", paramName, (*pData).elements.arr[i138].arr[i139].raw);
                    printf("%s::elements::Elem::Elem::acceleration %f\n", paramName, (*pData).elements.arr[i138].arr[i139].acceleration);
                }
            }
        }
    }
    {
        int i140;
        for(i140=0; i140<(*pData).times_val.nCount; i140++) {
            #if WORD_SIZE==8
            printf("%s::times_val::Elem::microseconds %lld\n", paramName, (*pData).times_val.arr[i140].microseconds);
            #else
            printf("%s::times_val::Elem::microseconds %d\n", paramName, (*pData).times_val.arr[i140].microseconds);
            #endif
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_Waypoint(const char *paramName, const asn1SccBase_Waypoint *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    {
        int i141;
        for(i141=0; i141<(*pData).position.data.nCount; i141++) {
            printf("%s::position::data::Elem %f\n", paramName, (*pData).position.data.arr[i141]);
        }
    }
    printf("%s::heading %f\n", paramName, (*pData).heading);
    printf("%s::tol_position %f\n", paramName, (*pData).tol_position);
    printf("%s::tol_heading %f\n", paramName, (*pData).tol_heading);
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_JointTrajectory(const char *paramName, const asn1SccBase_JointTrajectory *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    {
        int i142;
        for(i142=0; i142<(*pData).nCount; i142++) {
            printf("%s::Elem::position %f\n", paramName, (*pData).arr[i142].position);
            printf("%s::Elem::speed %f\n", paramName, (*pData).arr[i142].speed);
            printf("%s::Elem::effort %f\n", paramName, (*pData).arr[i142].effort);
            printf("%s::Elem::raw %f\n", paramName, (*pData).arr[i142].raw);
            printf("%s::Elem::acceleration %f\n", paramName, (*pData).arr[i142].acceleration);
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_samples_IMUSensors_m(const char *paramName, const asn1SccBase_samples_IMUSensors_m *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    #if WORD_SIZE==8
    printf("%s::time::microseconds %lld\n", paramName, (*pData).time.microseconds);
    #else
    printf("%s::time::microseconds %d\n", paramName, (*pData).time.microseconds);
    #endif
    {
        int i143;
        for(i143=0; i143<(*pData).acc.data.nCount; i143++) {
            printf("%s::acc::data::Elem %f\n", paramName, (*pData).acc.data.arr[i143]);
        }
    }
    {
        int i144;
        for(i144=0; i144<(*pData).gyro.data.nCount; i144++) {
            printf("%s::gyro::data::Elem %f\n", paramName, (*pData).gyro.data.arr[i144]);
        }
    }
    {
        int i145;
        for(i145=0; i145<(*pData).mag.data.nCount; i145++) {
            printf("%s::mag::data::Elem %f\n", paramName, (*pData).mag.data.arr[i145]);
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_samples_BodyState(const char *paramName, const asn1SccBase_samples_BodyState *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    #if WORD_SIZE==8
    printf("%s::time::microseconds %lld\n", paramName, (*pData).time.microseconds);
    #else
    printf("%s::time::microseconds %d\n", paramName, (*pData).time.microseconds);
    #endif
    {
        int i146;
        for(i146=0; i146<(*pData).pose.translation.data.nCount; i146++) {
            printf("%s::pose::translation::data::Elem %f\n", paramName, (*pData).pose.translation.data.arr[i146]);
        }
    }
    {
        int i147;
        for(i147=0; i147<(*pData).pose.orientation.im.nCount; i147++) {
            printf("%s::pose::orientation::im::Elem %f\n", paramName, (*pData).pose.orientation.im.arr[i147]);
        }
    }
    printf("%s::pose::orientation::re %f\n", paramName, (*pData).pose.orientation.re);
    {
        int i148;
        for(i148=0; i148<(*pData).pose.cov.data.nCount; i148++) {
            printf("%s::pose::cov::data::Elem %f\n", paramName, (*pData).pose.cov.data.arr[i148]);
        }
    }
    {
        int i149;
        for(i149=0; i149<(*pData).velocity.vel.data.nCount; i149++) {
            printf("%s::velocity::vel::data::Elem %f\n", paramName, (*pData).velocity.vel.data.arr[i149]);
        }
    }
    {
        int i150;
        for(i150=0; i150<(*pData).velocity.rot.data.nCount; i150++) {
            printf("%s::velocity::rot::data::Elem %f\n", paramName, (*pData).velocity.rot.data.arr[i150]);
        }
    }
    {
        int i151;
        for(i151=0; i151<(*pData).velocity.cov.data.nCount; i151++) {
            printf("%s::velocity::cov::data::Elem %f\n", paramName, (*pData).velocity.cov.data.arr[i151]);
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintWrappers_VectorXd(const char *paramName, const asn1SccWrappers_VectorXd *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    {
        int i152;
        for(i152=0; i152<(*pData).data.nCount; i152++) {
            printf("%s::data::Elem %f\n", paramName, (*pData).data.arr[i152]);
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintDummy2Base_T(const char *paramName, const asn1SccDummy2Base_T *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    #if WORD_SIZE==8
    printf("%s %lld\n", paramName, (*pData));
    #else
    printf("%s %d\n", paramName, (*pData));
    #endif
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_JointState_MODE(const char *paramName, const asn1SccBase_JointState_MODE *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    printf("%s %d\n", paramName, (int)(*pData));
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_Trajectory_m(const char *paramName, const asn1SccBase_Trajectory_m *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    printf("%s::speed %f\n", paramName, (*pData).speed);
    printf("%s::spline::geometric_resolution %f\n", paramName, (*pData).spline.geometric_resolution);
    #if WORD_SIZE==8
    printf("%s::spline::dimension %lld\n", paramName, (*pData).spline.dimension);
    #else
    printf("%s::spline::dimension %d\n", paramName, (*pData).spline.dimension);
    #endif
    #if WORD_SIZE==8
    printf("%s::spline::curve_order %lld\n", paramName, (*pData).spline.curve_order);
    #else
    printf("%s::spline::curve_order %d\n", paramName, (*pData).spline.curve_order);
    #endif
    printf("%s::spline::kind %d\n", paramName, (int)(*pData).spline.kind);
    {
        int i153;
        for(i153=0; i153<(*pData).spline.knots.nCount; i153++) {
            printf("%s::spline::knots::Elem %f\n", paramName, (*pData).spline.knots.arr[i153]);
        }
    }
    {
        int i154;
        for(i154=0; i154<(*pData).spline.vertices.nCount; i154++) {
            printf("%s::spline::vertices::Elem %f\n", paramName, (*pData).spline.vertices.arr[i154]);
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_commands_LinearAngular6DCommand_m(const char *paramName, const asn1SccBase_commands_LinearAngular6DCommand_m *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    #if WORD_SIZE==8
    printf("%s::time::microseconds %lld\n", paramName, (*pData).time.microseconds);
    #else
    printf("%s::time::microseconds %d\n", paramName, (*pData).time.microseconds);
    #endif
    {
        int i155;
        for(i155=0; i155<(*pData).linear.data.nCount; i155++) {
            printf("%s::linear::data::Elem %f\n", paramName, (*pData).linear.data.arr[i155]);
        }
    }
    {
        int i156;
        for(i156=0; i156<(*pData).angular.data.nCount; i156++) {
            printf("%s::angular::data::Elem %f\n", paramName, (*pData).angular.data.arr[i156]);
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_LinearAngular6DCommand(const char *paramName, const asn1SccBase_LinearAngular6DCommand *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    #if WORD_SIZE==8
    printf("%s::time::microseconds %lld\n", paramName, (*pData).time.microseconds);
    #else
    printf("%s::time::microseconds %d\n", paramName, (*pData).time.microseconds);
    #endif
    {
        int i157;
        for(i157=0; i157<(*pData).linear.data.nCount; i157++) {
            printf("%s::linear::data::Elem %f\n", paramName, (*pData).linear.data.arr[i157]);
        }
    }
    {
        int i158;
        for(i158=0; i158<(*pData).angular.data.nCount; i158++) {
            printf("%s::angular::data::Elem %f\n", paramName, (*pData).angular.data.arr[i158]);
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintWrappers_Vector3d(const char *paramName, const asn1SccWrappers_Vector3d *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    {
        int i159;
        for(i159=0; i159<(*pData).data.nCount; i159++) {
            printf("%s::data::Elem %f\n", paramName, (*pData).data.arr[i159]);
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_samples_Wrench_m(const char *paramName, const asn1SccBase_samples_Wrench_m *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    {
        int i160;
        for(i160=0; i160<(*pData).force.data.nCount; i160++) {
            printf("%s::force::data::Elem %f\n", paramName, (*pData).force.data.arr[i160]);
        }
    }
    {
        int i161;
        for(i161=0; i161<(*pData).torque.data.nCount; i161++) {
            printf("%s::torque::data::Elem %f\n", paramName, (*pData).torque.data.arr[i161]);
        }
    }
    #if WORD_SIZE==8
    printf("%s::time::microseconds %lld\n", paramName, (*pData).time.microseconds);
    #else
    printf("%s::time::microseconds %d\n", paramName, (*pData).time.microseconds);
    #endif
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_samples_Sonar(const char *paramName, const asn1SccBase_samples_Sonar *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    #if WORD_SIZE==8
    printf("%s::time::microseconds %lld\n", paramName, (*pData).time.microseconds);
    #else
    printf("%s::time::microseconds %d\n", paramName, (*pData).time.microseconds);
    #endif
    {
        int i162;
        for(i162=0; i162<(*pData).timestamps.nCount; i162++) {
            #if WORD_SIZE==8
            printf("%s::timestamps::Elem::microseconds %lld\n", paramName, (*pData).timestamps.arr[i162].microseconds);
            #else
            printf("%s::timestamps::Elem::microseconds %d\n", paramName, (*pData).timestamps.arr[i162].microseconds);
            #endif
        }
    }
    #if WORD_SIZE==8
    printf("%s::bin_duration::microseconds %lld\n", paramName, (*pData).bin_duration.microseconds);
    #else
    printf("%s::bin_duration::microseconds %d\n", paramName, (*pData).bin_duration.microseconds);
    #endif
    printf("%s::beam_width::rad %f\n", paramName, (*pData).beam_width.rad);
    printf("%s::beam_height::rad %f\n", paramName, (*pData).beam_height.rad);
    {
        int i163;
        for(i163=0; i163<(*pData).bearings.nCount; i163++) {
            printf("%s::bearings::Elem::rad %f\n", paramName, (*pData).bearings.arr[i163].rad);
        }
    }
    printf("%s::speed_of_sound %f\n", paramName, (*pData).speed_of_sound);
    #if WORD_SIZE==8
    printf("%s::bin_count %lld\n", paramName, (*pData).bin_count);
    #else
    printf("%s::bin_count %d\n", paramName, (*pData).bin_count);
    #endif
    #if WORD_SIZE==8
    printf("%s::beam_count %lld\n", paramName, (*pData).beam_count);
    #else
    printf("%s::beam_count %d\n", paramName, (*pData).beam_count);
    #endif
    {
        int i164;
        for(i164=0; i164<(*pData).bins.nCount; i164++) {
            printf("%s::bins::Elem %f\n", paramName, (*pData).bins.arr[i164]);
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_samples_DistanceImage(const char *paramName, const asn1SccBase_samples_DistanceImage *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    #if WORD_SIZE==8
    printf("%s::time::microseconds %lld\n", paramName, (*pData).time.microseconds);
    #else
    printf("%s::time::microseconds %d\n", paramName, (*pData).time.microseconds);
    #endif
    #if WORD_SIZE==8
    printf("%s::width %lld\n", paramName, (*pData).width);
    #else
    printf("%s::width %d\n", paramName, (*pData).width);
    #endif
    #if WORD_SIZE==8
    printf("%s::height %lld\n", paramName, (*pData).height);
    #else
    printf("%s::height %d\n", paramName, (*pData).height);
    #endif
    printf("%s::scale_x %f\n", paramName, (*pData).scale_x);
    printf("%s::scale_y %f\n", paramName, (*pData).scale_y);
    printf("%s::center_x %f\n", paramName, (*pData).center_x);
    printf("%s::center_y %f\n", paramName, (*pData).center_y);
    {
        int i165;
        for(i165=0; i165<(*pData).data.nCount; i165++) {
            printf("%s::data::Elem %f\n", paramName, (*pData).data.arr[i165]);
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_Time(const char *paramName, const asn1SccBase_Time *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    #if WORD_SIZE==8
    printf("%s::microseconds %lld\n", paramName, (*pData).microseconds);
    #else
    printf("%s::microseconds %d\n", paramName, (*pData).microseconds);
    #endif
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_TwistWithCovariance_m(const char *paramName, const asn1SccBase_TwistWithCovariance_m *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    {
        int i166;
        for(i166=0; i166<(*pData).vel.data.nCount; i166++) {
            printf("%s::vel::data::Elem %f\n", paramName, (*pData).vel.data.arr[i166]);
        }
    }
    {
        int i167;
        for(i167=0; i167<(*pData).rot.data.nCount; i167++) {
            printf("%s::rot::data::Elem %f\n", paramName, (*pData).rot.data.arr[i167]);
        }
    }
    {
        int i168;
        for(i168=0; i168<(*pData).cov.data.nCount; i168++) {
            printf("%s::cov::data::Elem %f\n", paramName, (*pData).cov.data.arr[i168]);
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_geometry_SplineBase_CoordinateType(const char *paramName, const asn1SccBase_geometry_SplineBase_CoordinateType *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    printf("%s %d\n", paramName, (int)(*pData));
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintT_Float(const char *paramName, const asn1SccT_Float *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    printf("%s %f\n", paramName, (*pData));
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintBase_samples_DepthMap(const char *paramName, const asn1SccBase_samples_DepthMap *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    #if WORD_SIZE==8
    printf("%s::time::microseconds %lld\n", paramName, (*pData).time.microseconds);
    #else
    printf("%s::time::microseconds %d\n", paramName, (*pData).time.microseconds);
    #endif
    {
        int i169;
        for(i169=0; i169<(*pData).timestamps.nCount; i169++) {
            #if WORD_SIZE==8
            printf("%s::timestamps::Elem::microseconds %lld\n", paramName, (*pData).timestamps.arr[i169].microseconds);
            #else
            printf("%s::timestamps::Elem::microseconds %d\n", paramName, (*pData).timestamps.arr[i169].microseconds);
            #endif
        }
    }
    printf("%s::vertical_projection %d\n", paramName, (int)(*pData).vertical_projection);
    printf("%s::horizontal_projection %d\n", paramName, (int)(*pData).horizontal_projection);
    {
        int i170;
        for(i170=0; i170<(*pData).vertical_interval.nCount; i170++) {
            printf("%s::vertical_interval::Elem %f\n", paramName, (*pData).vertical_interval.arr[i170]);
        }
    }
    {
        int i171;
        for(i171=0; i171<(*pData).horizontal_interval.nCount; i171++) {
            printf("%s::horizontal_interval::Elem %f\n", paramName, (*pData).horizontal_interval.arr[i171]);
        }
    }
    #if WORD_SIZE==8
    printf("%s::vertical_size %lld\n", paramName, (*pData).vertical_size);
    #else
    printf("%s::vertical_size %d\n", paramName, (*pData).vertical_size);
    #endif
    #if WORD_SIZE==8
    printf("%s::horizontal_size %lld\n", paramName, (*pData).horizontal_size);
    #else
    printf("%s::horizontal_size %d\n", paramName, (*pData).horizontal_size);
    #endif
    {
        int i172;
        for(i172=0; i172<(*pData).distances.nCount; i172++) {
            printf("%s::distances::Elem %f\n", paramName, (*pData).distances.arr[i172]);
        }
    }
    {
        int i173;
        for(i173=0; i173<(*pData).remissions.nCount; i173++) {
            printf("%s::remissions::Elem %f\n", paramName, (*pData).remissions.arr[i173]);
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

