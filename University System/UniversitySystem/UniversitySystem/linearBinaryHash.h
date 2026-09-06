#pragma once
#include "SLL.h"
#include "CourseBST.h"

using namespace System;
using namespace System::Collections::Generic;

namespace UniversitySystem {

    public ref class LinearBinaryHash
    {
    public:

        
        static StudentNode^ LinearSearchStudent(StudentNode^ head, String^ key)
        {
            if (head == nullptr || String::IsNullOrWhiteSpace(key))
                return nullptr;

            String^ searchKey = key->Trim()->ToLower();

            int searchID;
            bool isNumber = Int32::TryParse(searchKey, searchID);

            StudentNode^ curr = head;

            while (curr != nullptr)
            {
                
                if (isNumber && curr->id == searchID)
                    return curr;

                
                if (curr->name != nullptr &&
                    curr->name->ToLower()->Contains(searchKey))
                    return curr;

                
                if (curr->email != nullptr &&
                    curr->email->ToLower() == searchKey)
                    return curr;

                curr = curr->next;
            }
            return nullptr;
        }

        
        static CourseNode^ SearchInBST(CourseNode^ root, String^ key)
        {
            if (root == nullptr || String::IsNullOrWhiteSpace(key))
                return nullptr;

            int cmp = String::Compare(
                key->Trim(),
                root->CourseID,
                StringComparison::OrdinalIgnoreCase
            );

            if (cmp == 0)
                return root;

            if (cmp < 0)
                return SearchInBST(root->left, key);

            return SearchInBST(root->right, key);
        }

        
        static bool HashSearch(Dictionary<String^, String^>^ table, String^ key)
        {
            if (table == nullptr || String::IsNullOrWhiteSpace(key))
                return false;

            String^ normalizedKey = key->Trim()->ToLower();

            for each (String ^ k in table->Keys)
            {
                if (k->ToLower() == normalizedKey)
                    return true;
            }
            return false;
        }
    };
}
