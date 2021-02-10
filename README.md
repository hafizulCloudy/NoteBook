Laravel Tips
Awesome Laravel tips and tricks for all artisans. PR and ideas are welcome!
An idea by Md Hafizul Islam

Update 29 Jan 2021: Currently there are 1 tips    


Set logged in user with Observers
Use make:observer and fill in creating() method to automatically set up user_id field for current logged in user.

class PostObserver
{
    public function creating(Post $post)
    {
        $post->user_id = auth()->id();
    }
}




